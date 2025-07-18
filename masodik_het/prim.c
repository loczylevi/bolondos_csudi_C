



#include <stdio.h>
#include <stdbool.h>


int main(void){
    long long szam;
    printf("Kerek egy szamot: ");
    scanf(" %lld",&szam);
    printf("______________________________________________________________\n\n");
    bool primszam_e = false;
    long long osztok_db = 0;

    for (long long oszto = 1; oszto <= szam; oszto += 1){

        (szam % oszto == 0) ? osztok_db += 1,printf("Ez a szam %lld || oszthato ezzel: %lld\n",szam,oszto) : 0;

    }

    (osztok_db == 2) ? primszam_e = true : 0;


    (primszam_e) ? printf("\nEnnek a szamnak: %lld Ennyi osztoja van: %lld\nVAGYIS EZ A SZAM IGENIS PRIMSZAM!!!\n", szam,osztok_db ) : printf("\nEnnek a szamnak: %lld Ennyi osztoja van: %lld\nVAGYIS EZ A SZAM NEM PRIMSZAM!!!\n", szam,osztok_db );



    int szamok[10];
    
    /* beolvasás */        /* 0-tól 9-ig */

    for (int i = 0; i < 10; i += 1) {
        szamok[i] = i;

    }

    printf("%d",szamok[10]);

    return 0;
 
    

    

}

