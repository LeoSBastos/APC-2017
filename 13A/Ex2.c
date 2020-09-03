#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main(){
char string[101], stringast[101], stringmai[101];
int i;

printf("Digite sua string: ");
__fpurge(stdin);
scanf("%s", &string);

printf("\nO tamanho da sua string é: %d", strlen(string));

for(i=0;i<strlen(string);i++)
switch(tolower(string[i])){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
stringast[i]='*';
break;
default:
stringast[i]=string[i];
break;
}
stringast[i]='\0';
printf("\nA string asterisco é: %s", stringast);
for(i=0;i<strlen(string);i++)
    stringmai[i]=toupper(string[i]);
stringmai[i]='\0';
printf("\nA string maiuscula é: %s", stringmai);


}
