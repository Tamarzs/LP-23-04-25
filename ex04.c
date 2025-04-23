#include <stdio.h>

int main() {
    double numeros[3];

    printf("Digite o primeiro número: ");
    scanf("%lf", &numeros[0]);

    printf("Digite o segundo número: ");
    scanf("%lf", &numeros[1]);

    printf("Digite o terceiro número: ");
    scanf("%lf", &numeros[2]);

    int total;

    for(int i = 0; i < 3; i++) {
        total = total + numeros[i];
    }

    printf("A soma dos números é: %d\n", total);
}