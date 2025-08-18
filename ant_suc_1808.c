#include <stdio.h>

int main(){
    int numero;
    printf("Informe um número: ");
    scanf("%d", &numero);
    printf("\nSucessor: %d", numero+1);
    printf("\nAntecessor: %d", numero-1);
    return 0;
}
