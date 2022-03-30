#include <stdio.h>

int main(){
   int i, a, b, c, menor, meio, maior;

    printf("Escolha o primeiro numero: ");
    scanf("%d", &a);

    printf("Escolha o segundo numero: ");
    scanf("%d", &b);

    printf("Escolha o terceiro numero: ");
    scanf("%d", &c);

    printf("Escolha um indice:\n 1. Crescente\n 2. Decrescente\n 3. Maior valor no meio. ");
    scanf("%d", &i);

    if(a < b && b < c){
        menor = a; meio = b; maior = c;
    }
    else if(c < a && a < b){
        menor = c; meio = a; maior = b;
    }
    else if(b < c && c < a){
        menor = b; meio = c; maior = a;
    }
    else if(c < b && b < a){
        menor = c; meio = b; maior = a;
    }
    else if(a < c && c < b){
        menor = a; meio = c; maior = b;
    }
    else if(b < a && a < c){
        menor = b; meio = a; maior = c;
    }

    switch(i){
        case 1 : printf("%d, %d, %d", menor, meio, maior);
        break;

        case 2 : printf("%d, %d, %d", maior, meio, menor);
        break;

        case 3 : printf("%d, %d, %d", menor, maior, meio);
        break;
    }

}
