#include <stdio.h>

int main()
{
    int num, num_maior, num_menor, soma;

    printf("Digite o 1 numero: ");
    scanf("%d", &num);
    num_maior = num;
    num_menor = num;
    soma = num_maior;

    for(int i=2; i<=6;i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        soma+= num;
        if(num>num_maior)
            num_maior = num;

        if(num<num_menor)
            num_menor = num;

    }

    printf("O maior numero eh: %d", num_maior, "/n");
    printf("O menor numero eh: %d", num_menor, "/n");
    printf("A soma eh: %d", soma);

    return 0;
}
