#include <stdio.h>

int main(){
    float quilometros;
    float percursoLitro;
    float valorLitro;

    printf("Qual o tamanho do percurso a ser percorrido ?: ");
    scanf("%f", &quilometros);

    printf("Quantos quilometros seu carro percorre com 1 litro ?: ");
    scanf("%f", &percursoLitro);

    printf("Qual o valor do litro do combustivel ?: ");
    scanf("%f", &valorLitro);

    printf("litros de combustivel gastos no percurso: %f\n", quilometros / percursoLitro);
    printf("custo total de combustivel: %f", quilometros / percursoLitro * valorLitro);

}
