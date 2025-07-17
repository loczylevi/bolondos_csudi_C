
#include <stdio.h>
#include <stdbool.h>


typedef struct Ember{ //class struct változo tipus
    char* nev;
    int age;
    bool bele_egyezes;


} Ember;



void kiir_ember(Ember e1){   // eljárás kiirja 
    printf("nev: %s, életkor: %d bele egyezés: %s",e1.nev,e1.age,(e1.bele_egyezes==true) ? "igaz" : "Nem");
}

Ember bekero(Ember ember1, Ember ember2){


    if (18 <= ember1.age && 18 <= ember2.age)
    {
        Ember ember3;
        ember3.age = 0;
        ember3.nev = "Skibidi Péter (ifjú)";
        ember3.bele_egyezes = false;
        return ember3;
    }
    else{
        printf("Pedofilia Error\n");
        Ember ember3;
        ember3.age = -1;
        ember3.nev = "Törvéby sértés BTK";
        return ember3;
    }

}


int main(){

    Ember x;
    x.age = 18;
    x.nev = "Skibidi János";
    x.bele_egyezes = true;

    Ember y;
    y.age = 18;
    y.nev = "Skibidi Jánosné";
    y.bele_egyezes = false;

    kiir_ember(x);


    Ember szaporodas = bekero(x,y);

    (szaporodas.age == -1) ? printf("Hiba a szülök életkora túl alacsony") : kiir_ember(szaporodas);

    return 0;
}
