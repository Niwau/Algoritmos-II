#include <stdio.h>

int main(){
    int i;
    int a;
    int b;
    int c;

    int maior;
    int menor;
    int meio;

    printf("Escolha o primeiro numero: ");
    scanf("%d", &a);

    printf("Escolha o segundo numero: ");
    scanf("%d", &b);

    printf("Escolha o terceiro numero: ");
    scanf("%d", &c);

    printf("Escolha um indice:\n 1. Crescente\n 2. Decrescente\n 3. Maior valor no meio. ");
    scanf("%d", &i);

    switch(i){
        case 1 : printf("%d, %d, %d", menor, meio, maior);
        break;

        case 2 : printf("%d, %d, %d", maior, meio, menor);
        break;

        case 3 : printf("%d, %d, %d", menor, maior, meio);
        break;
    }

}
