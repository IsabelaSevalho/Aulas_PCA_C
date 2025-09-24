#include <stdio.h>

int main()
{
    int vet[10], maior, menor, posMaior, posMenor, aux;
    
    for(int i=0;i<10;i++){
        printf("Informe o valor de posicao %d:", i);
        scanf("%d", &vet[i]);
    }
    
    maior = vet[0];
    menor = vet[0];
    for(int i=1;i<10;i++){
        if(vet[i]>maior){
            maior = vet[i];
            posMaior =i;
        }
        
        if(vet[i]<menor){
            menor = vet[i];
            posMenor = i;
        }
    }
    
    printf("\nANTES DA TROCA");
    printf("\nMaior %d POS %d",vet[posMaior], posMaior);
    printf("\nMenor %d POS %d",vet[posMenor], posMenor);
    
    
    aux = posMaior;
    posMaior=posMenor;
    posMenor = aux;
    
    vet[posMaior] = maior;
    vet[posMenor] = menor;//trocar posições
    
    
    printf("\n\nPOS TROCA");
    printf("\nMaior %d POS %d", vet[posMaior], posMaior);
    printf("\nMenor %d POS %d", vet[posMenor], posMenor);
    
    return 0;
}
