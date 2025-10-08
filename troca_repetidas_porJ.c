// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

/*Implemente uma função que recebe uma string, colocando a letra ‘J’ onde
aparece caracteres repetidos.
Ex: pitaia, deve retornar → pJtJJJ*/

char *trocaRepetidosPorJ( char *palavra){

    for(int i =0;i<strlen(palavra);i++){
        for(int j=i+1;j<strlen(palavra);j++){
            
            if(palavra[i]==palavra[j]){
                palavra[i]='J';
                palavra[j]='J';
            }
        }
    }
    
    return palavra;
}

int main() {
    char palavra[]="\0";
    printf("Digite a palavra:");
    scanf("%s", &palavra);
    
   printf("Palavra trocando J onde repete = %s",  trocaRepetidosPorJ(palavra));
    
    return 0;
}
