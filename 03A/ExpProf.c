#include<stdio.h>


int main(){

int x=1;

for(;x<10;){
printf("\nDigite x: ");
scanf("%i", &x);
if(x>=10) continue;
else printf("\nVocê digitou %i", x);
if(x==0) break;
}
printf("\nFinal= %i", x);
}
