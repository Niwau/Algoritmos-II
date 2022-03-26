#include <stdio.h>

int main(){

    float valor;

    printf("Informe o valor do produto: \n");
    scanf("%f", &valor);

    printf("Valor a vista: %f\n\n", valor * 0.9);
    printf("Valor do parcelamento em 5 vezes sem juros: %f\n\n", valor/5);
    printf("Parcelamento em 10 vezes: %f\n\n", (valor * 1.2)/10);
}
