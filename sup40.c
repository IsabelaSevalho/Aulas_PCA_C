#include <stdio.h>

int main(){
    int vet[10], cont = 0;
    int vetSup40[10], posSup40[10]; 
    int indiceSup = 0; 

    for(int i = 0; i < 10; i++){
        printf("Informe o %dº número: ", i + 1); 
        scanf("%d", &vet[i]); 

        if(vet[i] > 40){
            vetSup40[indiceSup] = vet[i];
            posSup40[indiceSup] = i;
            indiceSup++; 
        }
    }

    if(indiceSup == 0){
        printf("Nenhum número superior a 40 foi encontrado.\n");
    } else {
        printf("\nNúmeros superiores a 40 e suas posições:\n");

        for(int i = 0; i < indiceSup; i++){
            printf("Número: %d, Posição: %d\n", vetSup40[i], posSup40[i]);
        }
    }

    return 0;
}
