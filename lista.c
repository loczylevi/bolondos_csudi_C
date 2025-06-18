#include <stdio.h>



int main()
{
    int hossz = 100;
    int* lista = (int*) malloc(hossz*sizeof(int));
    
    for(int i=0;i < hossz; i++){
        lista[i] = i+1;
        printf("\nlista eleme: %d", lista[i]);
    }
    
    
    
    
    return 0;
}

