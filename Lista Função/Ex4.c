#include<stdio.h>

int soma(int x, int y){
x+=y;
return(x);}
int sub(int x, int y){
x-=y;
return(x);}
void main(){
int x,y,s,d;
printf("Digite o primeiro número: ");
scanf("%d", &x);
printf("Digite o segundo número: ");
scanf("%d", &y);
s=soma(x,y);
d=sub(x,y);
printf("A soma é %d e a subtração é %d.", s,d);

}
