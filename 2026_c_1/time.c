/*Időtartam
Készíts programot, mely két időpontot kérdez a felhasználótól 
(óra, perc, másodperc külön), majd kiszámítja a két időpont közötti 
időtartamot másodpercben, és az eredményt kiírja a képernyőre.
*/


#include <stdio.h>

int main(){

    int ora, perc, sec;
    int ora2, perc2 , sec2;
    int ossz1, ossz2;
    int veg;

    printf("1. Kérem az orat percet másodpercet spacek mentén: ");
    scanf("%d %d %d",&ora, &perc, &sec);
    
    printf("2. Kérem az orat percet másodpercet spacek mentén: ");
    scanf("%d %d %d",&ora2, &perc2, &sec2);

    ossz1 = (ora * 3600) + (perc * 60) + sec;
    ossz2 = (ora2 * 3600) + (perc2 * 60) + sec2;


    if (ossz1 > ossz2)
    {
        veg = ossz1 - ossz2;
    }
    else {
        veg = ossz2 - ossz1;
    }

    printf("A %d és a %d közötti időtartam: %d", ossz1, ossz2, veg);




    char name[50];

    // Reading a string
    printf("\nKérek egy szöveget: ");
    scanf("%s", name);   // nem kell & mert már alapvetöen a memoriába irunk csak az első spacig olvas
    printf("%s", name);


    char szoveg[50];

    printf("\nKérek egy másik szöveget: ");
    scanf(" %49[^\n]", szoveg);   // mindent olvasss be kivéve a \n-t ez a a jel: '^' a kivéve 
    printf("%s", szoveg);
    printf("");
    
    
    return 0;


}


/*

#include <stdio.h>
#include <string.h>


int main(void)
{
  char str[] = "Kon Kon Kitsune";
  const char *delimiter = " ";
  
  char lista[10][17];
  int index = 0;
  

  char *tok = strtok(str, delimiter);


  while (tok != NULL)
  {
    printf("%s\n", tok);
    strcpy(lista[index], tok);
    index++;

    tok = strtok(NULL, delimiter);
  }
  lista[index][0] = '\0';

}

*/

