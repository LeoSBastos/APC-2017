#include<stdio.h>


int main(){

int x,n;

double nota,s,m;

printf("Digite o n�mero de alunos: ");
scanf("%i", &n);

n=x;

for(x=1,s=0;x>0;x++){
printf("\nDigite nota: ");
scanf("%lf", &nota);
s+=nota;
if(x==n) break;
}
m=s/(double)n;
printf("\nA m�dia da classe �: %lf", m);
}
