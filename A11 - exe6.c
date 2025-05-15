#include <stdio.h>

float media(float numeros[], int tamanho) {
    float soma = 0;
    int i;

    for (i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }

    return soma / tamanho;
}

int main() {
    float nums[2];
    
    printf("Digite o primeiro número: ");
    scanf("%f", &nums[0]);

    printf("Digite o segundo número: ");
    scanf("%f", &nums[1]);

    float resultado = media(nums, 2);  

    printf("A média dos números é: %.2f\n", resultado);

    return 0;
}
