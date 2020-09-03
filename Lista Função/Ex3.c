#include<stdio.h>

int cf(float x){
x=(x*1.8)+32;
return(x);
}
int fc(float x){
x=(x-32)/1.8;
return(x);
}
void main(){

char c;
float x,C,F;
printf("Você gostaria de saber os graus Celsius ou Fahrenheit C ou F: ");
scanf("%c", &c);

switch(tolower(c)){
case 'c':
printf("Digite a temperatura em Fahrenheit: ");
scanf("%f", &x);
C=fc(x);
printf("A temperatura em Celsius é %.2f.", C);
break;
case 'f':
printf("Digite a temperatura em Celsius: ");
scanf("%f", &x);
F=cf(x);
printf("A temperatura em Fahrenheit é %.2f.", F);
break;
}

}
