#include <stdio.h>

//Recursividade
/*Usando o conceito de recursividade, implemente a função Potencia que
devolve o valor de x elevado a n*/

int potencia(int base, int expoente){
    
    if(expoente ==1)    //pot(4,3) retorna 4*pot(4,2)
        return base;       //que retorna 4*pot(4,1)
    else{                   // que retorna 4 (pois o expoente será 1)
        return base*potencia(base, expoente-1); 
    }
    
}

int main() {
    int base, expoente;
    printf("Informe a base e o expoente:");
    scanf("%d", &base, "%d", &expoente);
    scanf("%d", &expoente);
    
    printf("\nO resultado da potencia eh: %d", potencia(base, expoente));

    return 0;
}
