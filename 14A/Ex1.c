#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){

char A[11],B[11];
int i,j;

printf("Digite uma string de até 10 caracteres: ");
scanf("%s", &A);

for(i=0,j=0;i<strlen(A);i++)
switch(tolower(A[i])){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
B[j]=A[i];
j++;
break;
default:
break;}
B[j]='\0';

printf("A string vogais é %s", B);}
