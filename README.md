# csudi bolondos C

## Mi az a buffer overflow veszély C-ben?
C-ben, ha van egy tömböd:

```c
char tarolo[10];
```
Ez pontosan 10 byte-ot foglal a memóriában, tehát indexelhető:
```c
tarolo[0]-tól
tarolo[9]-ig.
```
Ha te mondjuk a tarolo[10]-be próbálsz írni, akkor:

- ismeretlen memóriaterülethez nyúlsz hozzá

- ami memóriasérülést, hibás működést vagy crash-t okozhat

- C nem figyelmeztet erre futásidőben!

# kiküszöbölése strncopy() függvénnyel 
Ez egy biztonságosabb karaktertömb másoló függvény a C-ben:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char forras[] = "Hello világ!";
    char cel[10];

    strncpy(cel, forras, sizeof(cel) - 1);  // max 9 karaktert másolunk
    cel[9] = '\0';  // biztos lezárjuk

    printf("Eredmény: %s\n", cel);

    return 0;
}


```


# https://infoc.eet.bme.hu/ea01/

const == fixelni valamit<br>
olyan mint tuple pythonban nem lehet megváltoztatni <br>
ha elöl van a constant akkor jobbra fixál más esetben mindig balra fixál<br>
```c
    const int* a; //Nem lehet értéket változtatni
    int* const b; //Nem lehet pointert változtatni
    int const *c; //Ugyanaz, mint az a, konstans balra hat, ha tud, ha nem jobbra
    
    a=5; //Hibás
    b++; //Hibás
```



```c



#include <stdio.h>



int main()
{
    
    int hossz = 10;
    int* lista = (int*) malloc(hossz*sizeof(int));
    
    free(lista); // elengedjuk a változot
    int* lista = (int*) malloc(hossz*sizeof(int));
    
    lista[0] = 65;
    lista[1] = 69;
    
    
    int a = 10;
    char* tomb="skibidi";
    // char* tomb2 = {'v','v','v','v','v','g','\0'};
    
    for(int i=20;i<100;i++){
        printf("\nHello World %d", i);

    }
    char xd='y';
    printf("\nskibidi %d", a);
    //printf("\nskibidi %d", lista);
    printf("\n_____________________________________________ %d", a);
    
    //int hossz = 10;
    for(int i=0;i<hossz;i++){
        // printf("\nlista eleme %d", lista[i]);
        printf("\n%d,",*(lista+i)); // * al kiolvasom a pointerre mutato memoria cella értékét
        

    }
    
    int b =20;
    int* b_remutat =&b;
    int b_vissza = *b_remutat;

    return 0;
}


```
### https://infojegyzet.hu/vizsgafeladatok/okj-programozas/rendszeruzemelteto-191008/

```c
#include <stdio.h>   // printf, scanf
#include <stdlib.h>   // ez a cuccmok kell a mallochoz  // ez a konyvtár operációs rendszerrel kommunikál (memória lefoglalás)

int main()
{

    FILE* fj;
    
    char** lista = (char**) malloc(100*sizeof(char*));     // pointerek halmaza memoria cellák lefoglalása

    for(int i=0;i < 100; i++){
        lista[i] = (char*) malloc(101*sizeof(char));   //100 db. pointer lefoglalása
    }


    fj = fopen("EUcsatlakozas.txt","r");          // pythonban az open() függvényben a "r" az default DE A BOLONDOS C-BEN NEM DEFAULT A "r" READING AZ fopen() függvénynél

    if (fj == NULL)   // try catch ha nem létezik a fálj
    {
        printf("Hiba: Szédül az op rendszer nem találja a targetet!\n");
        return 1;
    }

    printf("Fájl sikeresen megnyitva!\nA porgram nem szédül!\n");


    
    int db = 0;

    while (fgets(lista[db],100,fj) != NULL)      // fgets() beolvas karaktereket
    {
        printf("%d. sor: %s",db+1, lista[db]);
        // lista[db] = tomb;
        db += 1;
        
    }
    
    printf("\n\nindexelés %s", lista[2]);

    fclose(fj);
    
    
    for(int i=0;i < 100; i++){
        free(lista[i]);                // mivel 100 db. memoria cellát foglaltunk le ezért mind a 100-at el is kell engedni [garbage collection saját magadnak]
    }

    free(lista);  // ha malloc() használunk el is kell engedni a foglalásokat!!!!
    
    return 0;
}
```
