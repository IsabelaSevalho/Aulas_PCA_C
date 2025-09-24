#include <stdio.h>

int main()
{
    int vet[3][3], somaDiagonal =0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Informe o valor de posicao[%d][%d]:", i, j);
            scanf("%d", &vet[i][j]);
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j)
                somaDiagonal+=vet[i][j];
        }
    }
    
    printf("soma = %d", somaDiagonal);

    return 0;
}
