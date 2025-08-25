#include <stdio.h>
/*Escreva um programa em C que peça ao usuário dois
números inteiros e apresente o resultado da realização das
operações aritméticas tradicionais.*/

int main()
{
    int a, b, soma, sub, mult, divisao;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("DIgite o segundo numero: ");
    scanf("%d", &b);

    soma = a+b;
    sub=a-b;
    mult=a*b;
    divisao= a/b;

    printf("Soma: %d\nSubtração: %d\nMultiplicação: %d\nDivisão: %d", soma,sub,mult, divisao);

    return 0;
}
