#include<stdio.h>

int main(){

//variaveis
double x, n;

    printf("Digite o número: ");
    scanf("%lf", &x);
    //setando a primeira variavel
    (n=x);
    //calculando a variavel
    if(x<0)
    printf("Error");
    else{
    if(x==0 || x==1)
    printf(1);
        else while (x>1){
        (n*=(x-1));
        (x-=1);}
        printf("\nO fatorial do seu numero é: %lf", n);}
}
