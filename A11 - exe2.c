#include <stdio.h>
#define PI 3.14159

int main(void) {
float raio;


    printf("Digite o raio: ");
    scanf("%f", &raio);
    
    float area = PI * raio * raio;
    printf("A área é %.2f\n", area);

 return 0;
}

