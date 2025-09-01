#include <stdio.h>

int main()
{
    int  num, comeco_dec, comeco_cresc=1;

    printf("Digite um numero: ");
    scanf("%d", &num);
    comeco_dec= num;

    for(int i =0; i<num;i++){

        printf("%d    %d", comeco_cresc, comeco_dec);
        printf("\n");

        ++comeco_cresc;
        --comeco_dec;
    }

    return 0;
}
