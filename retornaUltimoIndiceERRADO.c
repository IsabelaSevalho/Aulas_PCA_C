#include <stdio.h>
/*Implemente uma função que devolve o último índice em que encontrou o
caractere na string.
Ex: funcao(“alface”, ‘a’) → retorna 3
Ex: funcao(“alface”, ’g’) → retorna -1*/

int retornaUltimoIndice(char *palavra, char caractere){
    int indice, tam;
    tam = strlen(palavra);
    
    for(int i = (tam - 1); palavra[i]=='\0'; i--){
        if(strcmp(palavra[i],caractere))
            indice =i;
    }
    
    return indice;
    
}


int main() {
    printf("Indice = %d", retornaUltimoIndice("alface", "a"));
    return 0;
}
