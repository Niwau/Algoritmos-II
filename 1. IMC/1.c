#include <stdio.h>

int main(){
    float altura;
    float peso;
    float imc;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = (peso)/(altura * altura);

    printf("seu imc: %f\n", imc);

    if(imc < 18.5){
        printf("Abaixo do peso");

    } else{
        if(imc >= 18.5 && imc < 25){
            printf("Peso ideal");

        } else{
            if(imc >= 25 && imc < 30){
                printf("Sobrepeso");
            } else{
                if(imc >= 30 && imc < 35){
                    printf("Obesidade de grau I");
                } else{
                    if(imc >= 35 && imc < 40){
                        printf("Obesidade de grau II");
                    } else{
                        if(imc >= 40){
                            printf("Obesidade de grau III");
                        }
                      }
                  }
              }
          }
     }

}
