// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

/*Faça uma função que leia uma palavra. Só deve chamar a função quando o
tamanho da palavra for ímpar. Depois troque a letra do meio da palavra pela
letra ‘X’. (1,5)
Ex: palavra = ‘Maylin’. Não aceita e continua perguntando até que o tamanho da
palavra seja ímpar.
palavra = ‘Osvaldo’. Algoritmo aceita e troca a palavra para OsvXldo.*/

char *trocaImpar( char *palavra){
    int posicao = strlen(palavra)/2;
    palavra[posicao] = 'X';
    
    return palavra;
}

int main() {
    char palavra[]="Maylin";
    
    do{
        printf("Digite a palavra:");
        scanf("%s", &palavra);
    }while((strlen(palavra)%2)==0);
    
   printf("Palavra = %s",  trocaImpar(palavra));
    
    return 0;
}
