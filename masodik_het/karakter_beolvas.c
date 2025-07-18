

#include <stdio.h>
#include <ctype.h>

 


int main(void){
    
    // char xd[0] = {'a','b','s', '\0'};


    char betu;
    printf("kerek egy betut: ");
    int sikeres_e = scanf(" %c",&betu);
    (sikeres_e) ? printf("Sikeresen beolvastunk egy karaktert: %c karakter kodja: %d boolen: %d\n",betu,betu, sikeres_e) : printf("NEM sikerült beolvasni a karaktert boolen %d\n", sikeres_e);


    printf("\n__________Ha kiakarsz lepni a ciklusbol nyomj '-' jelet!_____________________\n\n");
    while (sikeres_e && betu != '-'){
        printf("kerek egy betut: ");
        sikeres_e = scanf(" %c",&betu);
        (sikeres_e) ? printf("Sikeresen beolvastunk egy karaktert: %c karakter kodja: %d boolen: %d\n",betu,betu, sikeres_e) : printf("NEM sikerült beolvasni a karaktert boolen %d\n", sikeres_e);

        (betu == '-') ? printf("Kileps a ciklusbol :3\n") : 0;
        
    }


    if (islower('D'))           /* HELYES */
        printf("Kisbetu\n");
    else
        printf("Nem kisbetu\n");

    
    return 0;

}
