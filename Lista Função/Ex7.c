//a vista com 10% desc
//duas vezes normal
//3 a 10 vezes com 3% de juros ao mes

#include<stdio.h>

float vista(float x){
x*=.9;
return(x);}
float parc2(float x){
x/=2;
return(x);}
float parcju(float x, int z){
x*=pow(1.03,z);
x/=z;
return(x);}

void main(){

float t;
int o,p;
printf("Digite o total gasto: ");
scanf("%f", &t);
if(t>100){
printf("Digite a opção de pagamento 1-A vista, 2-Duas vezes sem juros 3-De 3 a 10 vezes: ");
scanf("%d", &o);}
else{
printf("Digite a opção de pagamento 1-A vista, 2-Duas vezes sem juros: ");
scanf("%d", &o);}

switch (o){
case 1:
t=vista(t);
printf("Você irá pagar uma parcela de: %.2f", t);
break;
case 2:
t=parc2(t);
printf("Você irá pagar duas parcelas de: %.2f", t);
break;
case 3:
printf("Digite o número de parcelas: ");
scanf("%d", &p);
if(p>10||p<3)
printf("Número de parcela inválidas");
else{t=parcju(t,p);
printf("Você irá pagar %d parcelas de: %.2f", p,t);}
break;
}
}
