#include <stdio.h>

int main()
{
    int n1, n2;
    char operacao;
    printf("informe um numero: ");
    scanf("%d", &n1);
    printf("informe outro numero: ");
    scanf("%d", &n2);

    printf("Escolha uma operação:\n");
    printf("Soma: +\n");
    printf("Subtração: -\n");
    printf("Multiplicação: *\n");
    printf("Divisão: /\n");

    // Espaço antes de %c para ignorar caracteres de nova linha e espaços em branco no buffer
    scanf(" %c", &operacao);


    switch(operacao){
        case '+':
            printf("Soma = %d", (n1+n2));
            break;
        case '-':
            printf("Sub = %d", (n1-n2));
            break;
        case '*':
            printf("Multi = %d", (n1*n2));
            break;
        case '/':
            printf("Div = %d", (n1/n2));
            break;
        default:
            printf("\nDigita certo prr");
            break;
    }

    return 0;
}
