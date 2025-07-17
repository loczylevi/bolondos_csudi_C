

#include <stdio.h>

#define amig while


int main(){


    printf("Meddig irjam ki?");
    // printf("\nasdasd");
    int bekeres;
    scanf("%d", &bekeres);

    int meddig = 0;
    amig (meddig <= bekeres)
    {
        (meddig % 2 == 0) ? printf("\nparos %d",meddig) : printf("\nparatlan %d",meddig);
        meddig++;
    }
    printf("\n");
    for (int y = 1; y <= 5; y = y+1) {
    for (int x = 1; x <= 5; x = x+1)
      printf("%3d", x * y);
    printf("\n");
  }

    // printf("\n%d",bekeres);
    return 0;


}