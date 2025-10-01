#include <stdio.h>

//Recursividade
/*Faça um programa para calcular a soma dos n primeiros números dados
pelo usuário.
Ex: n = 7 → 7 + 6 + 5 + 4 + 3 + 2 + 1 = 28*/

int soma(int valor){
    
    if(valor ==1)    
        return valor;       
    else{      
        return valor+soma(valor-1); 
    }
    
}

int main() {
    int numero;
    printf("Informe a numero para a soma desses x primeiros:");
    scanf("%d", &numero);
   
    printf("\nO resultado da SOMA eh: %d", soma(numero));

    return 0;
}
