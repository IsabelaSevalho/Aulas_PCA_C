#include <stdio.h>
#include <stdlib.h>

/*Crie uma função chamada trocar que recebe dois ponteiros para inteiros (int *a, int *b). A
função deve trocar o conteúdo das variáveis para as quais esses ponteiros apontam. No
programa principal (main), declare e inicialize duas variáveis inteiras. Chame a função trocar
e imprima os valores antes e depois da chamada para verificar a troca.*/


void trocar(int *a, int *b){
    int aux = (*a);
    aux = *a;
    *a = *b;        // O valor apontado por a recebe o valor apontado por b
    *b = aux;
}

int main()
{
    int var1, var2;
    printf("Digite o valor da var1:");
    scanf("%d", &var1);
    printf("Digite o valor da var2:");
    scanf("%d", &var2);

    printf("ANTES DA TROCA\n\n");
    printf("Variavel 1: %d\n", var1);
    printf("Variavel 2: %d\n", var2);

    trocar(&var1, &var2); //recebendo endereço das variaveis
    printf("\n\nDEPOIS DA TROCA\n\n");
    printf("Variavel 1: %d\n", var1);
    printf("Variavel 2: %d\n", var2);

    return 0;
}
