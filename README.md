# csudi_C


```c



#include <stdio.h>



int main()
{
    
    int hossz = 10;
    int* lista = (int*) malloc(hossz*sizeof(int));
    
    free(lista); // elengedjuk a változot
    int* lista = (int*) malloc(hossz*sizeof(int));
    
    lista[0] = 65;
    lista[1] = 69;
    
    
    int a = 10;
    char* tomb="skibidi";
    // char* tomb2 = {'v','v','v','v','v','g','\0'};
    
    for(int i=20;i<100;i++){
        printf("\nHello World %d", i);

    }
    char xd='y';
    printf("\nskibidi %d", a);
    //printf("\nskibidi %d", lista);
    printf("\n_____________________________________________ %d", a);
    
    //int hossz = 10;
    for(int i=0;i<hossz;i++){
        // printf("\nlista eleme %d", lista[i]);
        printf("\n%d,",*(lista+i)); // * al kiolvasom a pointerre mutato memoria cella értékét
        

    }
    
    int b =20;
    int* b_remutat =&b;
    int b_vissza = *b_remutat;

    return 0;
}


```
