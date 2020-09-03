#include<stdio.h>

int main(){

float m[5][5],me=0,qm=0,ma,men;
int i, j;

    for (i=0;i<5;i++)
        for(j=0;j<5;j++){
            printf("Digite um número real: ");
            scanf("%f", &m[i][j]);
}
    for (i=0;i<5;i++)
        for(j=0;j<5;j++)
            me+=m[i][j];

    me/=25;

    for (i=0;i<5;i++)
        for(j=0;j<5;j++)
            if(m[i][j]<me)
                qm++;

    ma=m[0][0];
    men=m[0][0];
    for (i=0;i<5;i++)
        for(j=0;j<5;j++){
            if(ma<m[i][j])
                ma=m[i][j];
            if(men>m[i][j])
                men=m[i][j];
}
    printf("A média é %f, existem %f abaixo da média, o maior é %f e o menor é %f", me,qm,ma,men);




}
