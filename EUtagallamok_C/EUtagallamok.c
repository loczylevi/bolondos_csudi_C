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
