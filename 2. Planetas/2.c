#include <stdio.h>

int main(){

    int planet;
    float pesoTerra;
    float pesoPlaneta;

    printf("Escolha um Planeta:\n 1. Mercurio\n 2. Venus\n 3. Marte\n 4. Jupiter\n 5. Saturno\n 6. Urano\n ");
    scanf("%d", &planet);

    printf("Perfeito! agora digite seu peso: ");
    scanf("%f", &pesoTerra);

    switch(planet){
        case 1 : pesoPlaneta = (pesoTerra/10) * 0.37;
            printf("Seu peso em Mercurio: %f", pesoPlaneta);
        break;

        case 2 : pesoPlaneta = (pesoTerra/10) * 0.88;
            printf("Seu peso em Venus: %f", pesoPlaneta);
        break;

        case 3 : pesoPlaneta = (pesoTerra/10) * 0.38;
            printf("Seu peso em Marte: %f", pesoPlaneta);
        break;

        case 4 : pesoPlaneta = (pesoTerra/10) * 2.64;
            printf("Seu peso em Jupiter: %f", pesoPlaneta);
        break;

        case 5 : pesoPlaneta = (pesoTerra/10) * 1.15;
            printf("Seu peso em Saturno: %f", pesoPlaneta);
        break;

        case 6 : pesoPlaneta = (pesoTerra/10) * 1.17;
            printf("Seu peso em Urano: %f", pesoPlaneta);
        break;
    }
}
