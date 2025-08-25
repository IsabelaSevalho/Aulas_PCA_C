#include <stdio.h>

int main()
{
    int num_macas;
    float custo;
    printf("Informe o numero de maças compradas: ");
    scanf("%d", &num_macas);

    if(num_macas<12){
        custo = 1.30*num_macas;
    }else{
        custo = num_macas;
    }

    printf("O custo total foi de R$%f", custo);
    return 0;
}
