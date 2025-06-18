/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int hossz = 100;
    int* lista = (int*) malloc(hossz*sizeof(int));
    
    for(int i=0;i < hossz; i++){
        lista[i] = i+1;
        printf("\nlista eleme: %d", lista[i]);
    }
    printf("\n____________________________________________");
    for(int i=0;i < hossz; i++){
        printf("\nlista eleme: %d", lista[hossz-1-i]);
    }
    printf("\n____________________________________________");
    hossz = 0;
    for(int i=100;i > hossz; i--){
        printf("\nlista eleme: %d", lista[i-1]);
    }
    
    
    free(lista);
    return 0;
}




