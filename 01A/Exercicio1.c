#include<stdio.h>

int main(){

    //variable
    int age;

    //process
    printf("Digite a idade: ");
    scanf("%i", &age);
        if (age<=8)
        printf("\nInfantil A");
            else if(age<=12)
            printf("\nInfantil B");
                else if (age<=15)
                printf("\nJuvenil A");
                    else if(age<=18)
                    printf("\nJuvenil B");
                        else if(age<=30)
                        printf("\nAdulto");
                            else
                            printf("\nSenior");
}
