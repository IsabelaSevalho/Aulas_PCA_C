#include <stdio.h>

//Recursividade
/*Faça de forma iterativa e recursiva, a função de Fibonacci para os n
primeiros termos de um número informado pelo usuário
Fib = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584,...*/

int fibonacci(int n){//soma dos 2 anteriores para obter o atual
    
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    
    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    int numero;
    printf("Informe a quantidade de termos Fibonacci:");
    scanf("%d", &numero);
   
    for(int i =0; i<numero;i++){
        printf("\n%d", fibonacci(i));
    }

    return 0;
}
