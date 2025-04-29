#include <stdio.h>


double media (double numeros[]) {
    return (numeros[0] + numeros[1]) / 2;
}

double dobro (double numeros[]) {
    return ((numeros[0] * 2) + (numeros[1] * 2)) /2;
}

double maior (double numeros[]) {
    if (numeros[1] > numeros [0]) {
        return numeros[1], numeros[0];
    } else {
        return numeros[0], numeros[1];
    }
}

int main () {
    double numeros[2];

    printf("Digite o primeiro número: ");
    scanf("%lf", &numeros[0]);

    printf("Digite o segundo número: ");
    scanf("%lf", &numeros[1]);

    printf("Vetor: %.2lf, %.2lf\n", numeros[0], numeros[1]);

    printf("Maior: %.2lf\n", maior(numeros));

    return 0;
}