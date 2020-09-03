#include<stdio.h>

int maior(int x[], int y){
int i,qm;
    for(i=0;i<y;i++)
        if (qm<x[i])
            qm=x[i];
    return(qm);}
int menor(int x[], int y){
int i,qm;
    for(i=0;i<y;i++)
        if (qm>x[i])
            qm=x[i];
    return(qm);}
int soma(int x[], int y){
int i,s=0;
    for(i=0;i<y;i++)
        s+=x[i];
    return(s);}
int maiorgeral(int x1[],int y1,int x2[],int y2){
if (maior(x1,y1)<maior(x2,y2))
    return(maior(x2,y2));
else return(maior(x1,y1));}

void main(){

int A[]={5,8,-3,9,1}, B[]={3,2,5,-7,-9,12,7};

    printf("\nMaior elemento do vetor A = %d", maior(A,5));
    printf("\nMaior elemento do vetor B = %d", maior(B,7));
    printf("\nMenor elemento do vetor A = %d", menor(A,7));
    printf("\nMenor elemento do vetor B = %d", menor(B,7));
    printf("\nSoma de A = %d", soma(A,5));
    printf("\nSoma de B = %d", soma(B,7));
    printf("\nMaior geral = %d", maiorgeral(A,5,B,7));
}
