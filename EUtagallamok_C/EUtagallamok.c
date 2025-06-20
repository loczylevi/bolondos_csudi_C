#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    FILE* fj;


    char** lista2 = (char**) malloc(100*sizeof(char*));

    for(int i=0;i < 100; i++){
        lista2[i] = (char*) malloc(101*sizeof(char));
    }




    fj = fopen("EUcsatlakozas.txt","r");

    if (fj == NULL)
    {
        printf("Hiba: a fájlt nem sikerült megnyitni!\n");
        return 1;
    }

    printf("Fájl sikeresen megnyitva!\n");


    
    int db = 0;

    while (fgets(lista2[db],100,fj) != NULL)
    {
        printf("Beolvasott sor: %s", lista2[db]);
        // lista2[db] = tomb;
        db += 1;
        
    }
    
    printf("\nBeolvasott sor: %s", lista2[0]);

    fclose(fj);
    
    
    for(int i=0;i < 100; i++){
        free(lista2[i]);
    }

    free(lista2);
    
    return 0;
}
