/*Construa um algoritmo que carregue dois vetores de 7 elementos
cada. Mostre o vetor resultante da intercalação desses dois
vetores.*/

#include <stdio.h>

main(){
    int vetA[7], vetB[7], result[14], j;
    
    for(int i=0;i<7;i++){
        printf("Informe o valor de posicao %d para o primeiro vetor:", i);
        scanf("%d", &vetA[i]);
    }
    
    for(int i=0;i<7;i++){
        printf("Informe o valor de posicao %d para o segundo vetor:", i);
        scanf("%d", &vetB[i]);
    }
    
    j=0;
    for(int i=0;i<14;i+2){
        result[i] = vetA[j]; //alternando as casas INTERCALANDO
        j++;
    }
    
    j=0;
    for(int i=1;i<14;i+2){
        result[i] = vetB[j]; //alternando as casas INTERCALANDO
        j++;
    }
}
