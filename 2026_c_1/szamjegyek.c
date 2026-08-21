


/*
Írj programot, amely a képernyőre írja a 4, 5 és 6 számjegyekből 
képezhető összes négyjegyű számot!
*/


#include <stdio.h>

int main(){

    for (int i = 4; i <= 6; i++)
    {
        printf("%d",i);
        for (int b = 5; b <= 7 ; b++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    printf("____________________________________________\n\n");


    #include <stdio.h>

    for (int a = 4; a <= 6; a++)
    {
        for (int b = 4; b <= 6; b++)
        {
            for (int c = 4; c <= 6; c++)
            {
                for (int d = 4; d <= 6; d++)
                {
                    printf("%d%d%d%d\n", a, b, c, d);
                }
            }
        }
    }


printf("____________________________________________\n\n");
    for (int a = 4; a <= 6; a++)
{
    for (int b = 4; b <= 6; b++)
    {
        printf("%d%d\n", a, b);
    }
}

    return 0;
}

