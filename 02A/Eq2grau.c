#include<stdio.h>

int main(){

double y1, y2;
int a,b,c,d;


printf("Receba A, B, C: ");
scanf("%i %i %i", &a, &b, &c);

d=(b*b)-(4*a*c);
printf("Seu delta é %i", d);


if (d<0)
printf("\nNão tem raiz real");
    else if (d==0){
    y1=(-b+sqrt(d))/2*a;
    printf("\nTem uma raiz real, que é: %lf", y1);
        }else{
        y1=(-b+sqrt(d))/2*a;
        y2=(-b-sqrt(d))/2*a;
        printf("\nTem duas raizes reais, que são: %lf e %lf", y1, y2);
}
}
