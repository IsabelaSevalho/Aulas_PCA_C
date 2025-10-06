#include <stdio.h>
#include <ctype.h>
/*Implemente uma função que devolve o número de caracteres alfabéticos
(A,a,B,b,C,c,...,Z,z). Deve considerar tanto letras maiúsculas quanto minusculas.*/

int contaCaracteresAlfabeticos(char *palavra){
    int contaAlf=0;
    
    for(int i=0; palavra[i]!='\0'; i++){
        if(isalpha(palavra[i]))
            ++contaAlf;
    }
    
    return contaAlf;
    
}


int main() {
    char palavra[] = "Abb12333UiuAAJamjAMBalaBALABimbem1234";
    printf("Quantidade = %d", contaCaracteresAlfabeticos(palavra));
    return 0;
}
