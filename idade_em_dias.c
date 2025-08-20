#include <stdio.h>

int main()
{
    int idadeEmDias, anos, meses, dias;
    printf("Informe sua idade em anos: ");
    scanf("%d", &anos);
    printf("Informe sua idade em meses: ");
    scanf("%d", &meses);
    printf("Informe sua idade em dias: ");
    scanf("%d", &dias);

    idadeEmDias = (anos*360) + (meses*30) +dias;

    printf("\nSua idade em dias: %d", idadeEmDias);

    return 0;
}
