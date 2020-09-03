#include<stdio.h>

int main(){

    float bmi, h, w;
    printf("Digite sua altura: ");
    scanf("%f", &h);
    printf("Digite seu peso: ");
    scanf("%f", &w);

    bmi=w/pow(h,2);

        if(bmi<18.5)
        printf("Seu IMC é %f e você está abaixo do peso.", bmi);
         else if(bmi<25)
         printf("Seu IMC é %f e você está no peso normal.", bmi);
            else if(bmi<30)
            printf("Seu IMC é %f e você está sobrepeso.", bmi);
                else if(bmi<35)
                printf("Seu IMC é %f e você está com obesidade grau 1.", bmi);
                    else if (bmi<40)
                        printf("Seu IMC é %f e você está com obesidade grau 2.", bmi);
                            else
                            printf("Seu IMC é %f e você está com obesidade grau 3.", bmi);

    }
