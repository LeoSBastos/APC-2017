#include<stdio.h>

int compri(float x){
x*=10;
return(x);
}

void main(){
float x, y, z;

printf("Digite o valor em metro a ser convertido: ");
scanf("%f", &x);

x=compri(x);
y=compri(x);
z=compri(y);

printf("São %.0f decímetros, %.0f centímetros ou %.0f milímetros", x, y, z);



}
