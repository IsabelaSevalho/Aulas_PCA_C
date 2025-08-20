#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2;
    printf("Insira o valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);
    printf("Insira o valor de C: ");
    scanf("%d", &c);

    x1 = (-b+sqrt((b*b)-4*a*c))/(2*a);
    x2 = (-b-sqrt((b*b)-4*a*c))/(2*a);

    printf("\nX1 = %f", x1);
    printf("\nX2 = %f", x2);
    return 0;
}
