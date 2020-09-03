#include<stdio.h>

void pers(){
int x,q1=0,q2=0,q3=0,q4=0,q5=0;
    for(x=1;x!=0;){
    printf("\n1-Bob Esponja.\n2-Lula Molusco.\n3-Seu Sirigueijo\n4-Patrick.\n5-Nulo.\n0-Sair.\nDigite um número válido:");
    scanf("%d", &x);
    switch(x){
        case 1:
            q1++;
            break;
        case 2:
            q2++;
            break;
        case 3:
            q3++;
            break;
        case 4:
            q4++;
            break;
        case 5:
            q5++;
            break;
        case 0: break;
        default:
            printf("\nErrou!!! Use um número válido.");
            break;}}
    printf("Foram %d votos para Bob Esponja, %d para Lula Molusco, %d para Seu Sirigueijo, %d para Patrick e %d nulos",q1,q2,q3,q4,q5);}
void main(){
pers();}

