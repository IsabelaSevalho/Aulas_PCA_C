#include <stdio.h>

int main() {
    int mat[3][3];
    int qntd_primos = 0;

    // Carregar a matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Informe o valor da posicao[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Calcular a quantidade de números primos
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num_atual = mat[i][j];

            // Ignorar números não positivos ou iguais a 1
            if (num_atual <= 1) {
                continue;
            }

            int eh_primo = 1; // Assumir que é primo inicialmente

            // O número 2 é o único número par primo
            if (num_atual == 2) {
                eh_primo = 1;
            } else {
                // Verificar se é divisível por algum número de 2 até a raiz quadrada (ou metade) do número
                for (int num = 2; num <= num_atual / 2; num++) {
                    if (num_atual % num == 0) {
                        eh_primo = 0; // Não é primo
                        break;        // Sair do loop interno
                    }
                }
            }

            if (eh_primo) {
                qntd_primos++;
            }
        }
    }

    printf("A quantidade de primos positivos eh: %d\n", qntd_primos);
    return 0;
}

