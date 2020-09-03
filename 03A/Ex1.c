#include<stdio.h>



int main(){

int x;

printf("Digite x: ");
scanf("%i", &x);

for(;x<=100;x*=3)
printf("\n%i", x);

printf("\n%i", x);
}
