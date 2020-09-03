#include<stdio.h>

float delta(float a,float b,float c){
float d;
d=pow(b,2)-(4*a*c);
return (d);}
float raiz1(float a,float b,float c,float d){
float r;
r=(sqrt(d)-b)/(2*a);
return(r);}
float raiz2(float a,float b,float c,float d){
float r;
r=(-sqrt(d)-b)/(2*a);
return(r);}

void main(){

float a,b,c,d,r1,r2;

printf("Digite a: ");
scanf("%f", &a);
printf("\nDigite b: ");
scanf("%f", &b);
printf("\nDigite c: ");
scanf("%f", &c);

d=delta(a,b,c);
if(d<0)
printf("Não tem raízes reais");
else if(d==0){
r1=raiz1(a,b,c,d);
printf("Existe uma raiz real: %.2f", r1);}
else{
r1=raiz1(a,b,c,d);
r2=raiz2(a,b,c,d);
printf("Existe duas raízes reais: %.2f e %.2f", r1,r2);}}
