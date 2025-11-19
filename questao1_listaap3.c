#include <stdio.h>
#include <stdlib.h>

/*1- Declare uma variável char chamada letra
e inicialize-a com um caractere de sua escolha.
Declare um ponteiro para char chamado p_letra
e faça-o apontar para o endereço de letra.
- Imprima:
• O valor de letra.
• O endereço de letra (usando o operador endereço de &).
• O endereço armazenado em p_letra.
• O valor de letra acessado através de p_letra
(usando o operador de desreferência *).*/

int main()
{
    char letra='c', *p_letra;
    p_letra = &letra;

    printf("Caractere: %c\n", letra);
    printf("Endereço: %d\n", p_letra);
    printf("Valor acessado através de p-letra: %c", (*p_letra));
    return 0;
}
