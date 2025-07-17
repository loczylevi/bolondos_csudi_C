#include <stdio.h>
// #include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#ifndef STDBOOL_H
    #define STDBOOL_H

    #define true 1
    #define false 0
    #define bool unsigned char

#endif

typedef struct Pont{
    int x;
    int y;
} cumi;


void kiir_pont(struct Pont p){  // ez egy eljárás nincs return ergo nem függvény 
    printf("X: %d, Y: %d", p.x,p.y);
}


int main()
{

    cumi p;
    p.x = 4;
    p.y=9;

    kiir_pont(p);

    char karakterlanc[10] = "skibidi";
    int index = 0;
    bool ize = false;
    while (karakterlanc[index] != '\0')
    {
        printf("\n%c",karakterlanc[index]);

        ('i' == karakterlanc[index]) ? ize = true : ize; // miss typing elkerülése Yoda notation

        if (ize)
        {
            break;
        }
        
        index++;
        
    }
    
    return 0;

}
