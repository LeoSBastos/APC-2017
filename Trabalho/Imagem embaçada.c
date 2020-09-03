#include<stdio.h>

int main(){

int linha=2,mediana,cont=1,x,y,z=1,aux;

printf("-------------------Losango-------------------\n\n");

while((linha%2)==0)
{
    printf("Digite o número de linhas do losango: ");
    scanf("%i", &linha);

    if((linha%2)==0)
    printf("Digite um número impar!\n");

}


printf("\n");

mediana=(linha+1)/2;

aux=mediana;

for(cont=1;cont<=mediana; cont++)
{

    for(x=1;x<=aux-1;x++)
    {
        printf(" ");
    }
    for(y=1;y<=z;y++)
    {
        printf("*");
    }
    printf("\n");
    aux--;
    z+=2;
}

z=1;
aux=linha-2;

for(cont=1;cont<=mediana; cont++)
{

    for(y=1;y<=z;y++)
    {
        printf(" ");
    }
    for(x=1;x<=aux;x++)
    {
        printf("*");
    }

    printf("\n");
    aux-=2;
    z++;
}
}
