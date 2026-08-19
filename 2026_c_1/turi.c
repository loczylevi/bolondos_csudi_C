

/*
Egy turkálóban minden póló darabja 500 Ft. Ha egy vásárlás során valaki több darabot
is vesz, a második ára már csak 450 Ft, a harmadik pedig 400 Ft, de a negyedik és
további darabok is ennyibe kerülnek, tehát az ár a harmadik vásárlása után már nem 
csökken tovább.
Írj programot, amely a vásárolt pólók darabszámának ismeretében megmondja, hogy
mennyit fizet a vásárló!
*/

#include <stdio.h>


int main(){
    int beker;
    printf("Ird le hány db polót szeretnél venni: ");
    scanf("%d", &beker);
    int ossz = 0;
    if (beker == 1)
    {
        ossz = ossz + 500;
    }
    else if (beker == 2)
    {
        ossz = ossz + 500 + 450;
    }
    else if (beker == 3)
    {
        ossz = ossz + 500 + 450 + 400;
    }
    else{
        ossz = ossz + 500 + 450 + 400 + (beker-3)*400;
    }

    printf("%d", ossz);

    return 0;
}

