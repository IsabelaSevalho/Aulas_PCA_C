#include <stdio.h>
#include <stdlib.h>

/*3- Declare um array de inteiros chamado numeros com 5 elementos. Crie um ponteiro para
inteiro chamado p_num e faça-o apontar para o início do array (p_num = numeros; ou p_num
= &numeros[0];). Use um loop for para iterar sobre o array. Em cada iteração, imprima o valor
do elemento usando apenas a notação de ponteiro (*(p_num + i) ou *(p_num)) e incremente
o ponteiro se usar a segunda notação.*/


int main()
{
    int numeros[5], *p_num;
    p_num = &numeros[0];

    for(int i=0;i<5;i++){
        printf("Digite um valor para a posição %d do array:", i);
        scanf("%d", &numeros[i]);

        printf("Imprimindo o valor do elemento:%d\n\n", *(p_num+i));//passa por cada endereço do vetor
    }

    return 0;
}
