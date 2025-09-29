#include <stdio.h>

/*Faça um programa que tenha uma função para receber por parâmetro
o tamanho do vetor, em seguida realiza as seguintes operações:
a) Aceitar somente números ímpares e positivo.
b) A função deve retornar a soma do maior e do menor elemento do
vetor.*/

int operacoes(int tamVetor){
    int vetor[tamVetor], maior, menor;
    
    while(((tamVetor%2)==0)||tamVetor<0){
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &tamVetor);
    }
    
    for(int i =0;i<tamVetor;i++){
        
        printf("Informe o valor do vetor para a posição %i:", i);
        scanf("%d", &vetor[i]);
        
        if(i==0){
            menor = vetor[i];
            maior = vetor[i];
        }
        
        if(vetor[i]>maior)
            maior = vetor[i];
        
        if(vetor[i]<menor)
            menor = vetor[i];
        
    }
    return (menor+maior);
}

int main()
{
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    printf("A soma eh: %d", operacoes(tamanho));
    return 0;
}
