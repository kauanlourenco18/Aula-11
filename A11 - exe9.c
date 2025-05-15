#include <stdio.h>

void maior(float numeros[], int tamanho) {
    if (tamanho >= 2 && numeros[1] > numeros[0]) {
        float temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }
}

int main() {
    float numeros[2];

    printf("Digite o primeiro número: ");
    scanf("%f", &numeros[0]);

    printf("Digite o segundo número: ");
    scanf("%f", &numeros[1]);

    maior(numeros, 2);

    printf("Vetor ordenado: %.0f %.0f\n", numeros[0], numeros[1]);

    return 0;
}
