#include<stdio.h>

int main(){
//variaveis
int x;
double s=1;

printf("Digite seu numero: ");
scanf("%i", &x);

//processos
if (x<=0)
printf("Error");
    else if(x==1)
    printf(1);
        else while (x>1){
        s+=1.0/x;
        x--;
        }
        printf("Sua somatória é %lf", s);

}
