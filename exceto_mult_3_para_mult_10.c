#include <stdio.h>

int main()
{
    int  numeros;

    printf("Digite um numero: ");
    scanf("%d", &numeros);

    printf("%d", numeros);
    printf("\n");

    ++numeros;
    while((numeros%10)!=0){


        if((numeros%3)!=0){
            printf("%d", numeros);
            printf("\n");
        }
        ++numeros;

    }

    return 0;
}
