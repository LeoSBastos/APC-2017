#include<stdio.h>

int main(){
//variaveis
int s, x;

printf("Digite seu numero: ");
scanf("%i", &x);
//setando a primeira variavel
(s=x);
//processos
if (x<=0)
printf("Error");
    else if(x==1)
    printf(1);
        else while (x>1){
        (s+=(x-1));
        (x-=1);
        }
        printf("Sua somatória é %i", s);

}
