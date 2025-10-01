#include <stdio.h>

//Recursividade
/*Faça um programa para calcular a soma dos n primeiros números dados
pelo usuário.
Ex: n = 7 → 7 + 6 + 5 + 4 + 3 + 2 + 1 = 28*/

int soma(int valor, int somatorio){
    
    if(valor ==1)    
        return ++somatorio;       
    else{      
        somatorio+=valor;
        return soma(valor-1, somatorio); 
    }
    
}

int main() {
    int numero, somatorio =0;;
    printf("Informe a numero para a soma desses x primeiros:");
    scanf("%d", &numero);
   
    printf("\nO resultado da SOMA eh: %d", soma(numero, somatorio));

    return 0;
}
