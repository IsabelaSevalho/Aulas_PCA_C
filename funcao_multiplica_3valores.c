#include <stdio.h>

/*2) Criar uma função para receber três valores reais passados por
parâmetro, multiplicar e mostrar o resultado.*/

void multiplica(float x, float y, float z){
    float resultado = (x*y*z);
    printf("resultado: %.2f", resultado);
}

int main()
{
    float valorX, valorY, valorZ;
    printf("Digite o valor X: ");
    scanf("%f", &valorX);
    
    printf("Digite o valor Y: ");
    scanf("%f", &valorY);
    
    printf("Digite o valor Z: ");
    scanf("%f", &valorZ);

    multiplica(valorX, valorY, valorZ);
    
    return 0;
}
