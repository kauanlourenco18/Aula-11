#include <stdio.h>

int main() {
    float numeros[3];   
    float soma = 0.0;   
    

    for (int i = 0; i < 3; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];  
    }

    printf("Soma dos números: %.2f\n", soma);

    return 0;
}
