#include <stdio.h>
#include <stdlib.h>

/*4 - Crie uma função chamada comprimento_string que recebe um ponteiro para char (const
char *str) como argumento. Dentro da função, use um loop while para iterar a string enquanto
o caractere atual não for o terminador nulo (\0). Use a aritmética de ponteiros para avançar
no string (ex: str++) e conte quantos caracteres foram percorridos.*/

void comprimento_string(char *str){
    
    while((*str)!='\0'){
        
        
        str++;
    }

}

int main()
{
    char palavra[0];
    comprimento_string();
    

    return 0;
}
