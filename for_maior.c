#include <stdio.h>

int main()
{
    int num, num_maior;

    printf("Digite o 1 numero: ");
    scanf("%d", &num_maior);

    for(int i=2; i<=10;i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if(num>num_maior)
            num_maior = num;
        else
            continue;

    }

    printf("O maior numero eh: %d", num_maior);
    return 0;
}
