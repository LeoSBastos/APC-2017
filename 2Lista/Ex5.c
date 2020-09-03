#include<stdio.h>

int main(){

float V[20],me=0;
int i, qm=0;

    for (i=0;i<20;i++){
            printf("Digite um número real: ");
            scanf("%f", &V[i]);
}
    for (i=0;i<20;i++)
            me+=V[i];

    me/=20;

    for (i=0;i<20;i++)
            if(V[i]<me)
                qm++;

    printf("A média é %.2f, existem %d abaixo da média", me,qm);




}
