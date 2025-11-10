// Online C compiler to run C program online
#include <stdio.h>

char* Ascii_create(int n, char c){
    char *p; //ponteiro
    p= (char*)malloc(n+1);
    
    if(p==NULL){
        return p;
    }
    for(int i=0; i<n;i++){
        p[i] = c+1;
    }
    
    p[i] = '\0';
    return p; //pega a primeira posição da string e como o ponteiro aponta
              //para todo o espaço alocado para esses valores, retorna tudo
    
}

int main() {
    int n;
    char c;
    printf("Informe a quantidade de letras:");
    scanf("%d", &n);
    printf("Informe uma letra inicial do alfabeto:");
    scanf("%c", &c);
    printf("%s", Ascii_create(n, c));

    return 0;
}
