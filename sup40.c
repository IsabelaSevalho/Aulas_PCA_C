#include <stdio.h>

int main(){
    int vet[10], cont = 0;
    int vetSup40[10], posSup40[10]; // Vetores para armazenar números e posições
    int indiceSup = 0; // Novo contador para os vetores vetSup40 e posSup40

    // Preencher o vetor principal
    for(int i = 0; i < 10; i++){
        printf("Informe o %dº número: ", i + 1); // Começa a pedir a partir do 1º número
        scanf("%d", &vet[i]); // Usa &vet[i] para ler o endereço de memória do elemento

        if(vet[i] > 40){
            vetSup40[indiceSup] = vet[i]; // Guarda o número no novo índice
            posSup40[indiceSup] = i;      // Guarda a posição no novo índice
            indiceSup++; // Incrementa o índice para o próximo elemento superior a 40
        }
    }

    // Verificar se foram encontrados números superiores a 40
    if(indiceSup == 0){
        printf("Nenhum número superior a 40 foi encontrado.\n");
    } else {
        printf("\nNúmeros superiores a 40 e suas posições:\n");
        // Imprimir apenas os números e posições que foram realmente guardados
        for(int i = 0; i < indiceSup; i++){
            printf("Número: %d, Posição: %d\n", vetSup40[i], posSup40[i]);
        }
    }

    return 0; // Boa prática de programação
}
