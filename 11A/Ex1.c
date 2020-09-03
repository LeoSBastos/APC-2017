#include<stdio.h>

int pers(int x){
switch(x){
    case 1:
        printf("\nBob Esponja");
        break;
    case 2:
        printf("\nLula Molusco");
        break;
    case 3:
        printf("\nSeu Sirigueijo");
        break;
    case 4:
        printf("\nPatrick");
        break;
    case 5:
        printf("\nNulo");
        break;
    default:
        printf("\nErrou!!! Use um número válido.");
        break;}}

void main(){
int x;
    printf("1-Bob Esponja.\n2-Lula Molusco.\n3-Seu Sirigueijo\n4-Patrick.\n5-Nulo.\nDigite um número válido:");
    scanf("%d", &x);
    x=pers(x);}
