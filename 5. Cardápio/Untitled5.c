#include <stdio.h>

int main(){

    int codigo;
    int quantidade;
    float valor;

    printf("--------------------------------\n");
    printf("|      nome       codigo valor |\n");
    printf("--------------------------------\n");
    printf("| cachorro quente | 100 | 3.50 |\n");
    printf("--------------------------------\n");
    printf("| Bauru simples   | 101 | 4.50 |\n");
    printf("--------------------------------\n");
    printf("| Bauru com ovo   | 102 | 5.20 |\n");
    printf("--------------------------------\n");
    printf("| Hamburguer      | 103 | 3.00 |\n");
    printf("--------------------------------\n");
    printf("| Cheeseburguer   | 104 | 4.00 |\n");
    printf("--------------------------------\n");
    printf("| Refrigerante    | 105 | 2.50 |\n");
    printf("--------------------------------\n");

    printf("Selecione o codigo: ");
    scanf("%d", &codigo);

    printf("Informe a quantidade: ");
    scanf("%d", &quantidade);

    switch(codigo){
        case 100 : valor = quantidade * 3.50;
        break;

        case 101 : valor = quantidade * 4.50;
        break;

        case 102 : valor = quantidade * 5.20;
        break;

        case 103 : valor = quantidade * 3.00;
        break;

        case 104 : valor = quantidade * 4.00;
        break;

        case 105 : valor = quantidade * 2.50;
        break;
    }

    printf("Valor total: %f", valor);
}
