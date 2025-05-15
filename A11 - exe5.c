#include <stdio.h>

int main() {
    float numeros[2];  

    printf("Digite o primeiro número: ");
    scanf("%f", &numeros[0]);

    printf("Digite o segundo número: ");
    scanf("%f", &numeros[1]);

    printf("Primeiro número: %.2f\n", numeros[0]);
    printf("Segundo número: %.2f\n", numeros[1]);

    return 0;
}
