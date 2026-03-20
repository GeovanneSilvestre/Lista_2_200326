
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int matriz[3][3];
    int i, j;
    int soma_impares = 0;

        printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matriz[i][j] % 2 != 0) {
                soma_impares += matriz[i][j];
            }
        }
    }

    printf("\nSoma dos numeros impares: %d\n", soma_impares);

    return 0;
}