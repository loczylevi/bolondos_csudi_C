


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

int main()
{
    printf("a");

    char karakterlanc[10] = "skibidi";
    int index = 0;
    bool ize = false;
    while (karakterlanc[index] != '\0')
    {
        printf("%c",karakterlanc[index]);

        (karakterlanc[index] == 'i') ? ize = true : ize;

        if (ize)
        {
            break;
        }
        
        index++;
        
    }
    
    return 0;


}


