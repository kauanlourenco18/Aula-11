#include <stdio.h>

float media(float numeros[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return soma / tamanho;
}

float dobro(float numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i] = numeros[i] * 2.0;
    }
    return media(numeros, tamanho);
}

int main() {
    float numeros[2];

    printf("Digite o primeiro número: ");
    scanf("%f", &numeros[0]);

    printf("Digite o segundo número: ");
    scanf("%f", &numeros[1]);

    float media_original = media(numeros, 2);
    printf("Média original: %.2f\n", media_original);

    float nova_media = dobro(numeros, 2);
    printf("Média após dobrar os valores: %.2f\n", nova_media);

    return 0;
}
