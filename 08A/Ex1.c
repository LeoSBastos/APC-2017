#include<stdio.h>
#include<string.h>

int main(){
int i,c=0;
char S[51],x;
printf("Digite a string ");
scanf("%s", &S);

printf("Digite o caractere que você deseja saber a quantidade: ");
__fpurge(stdin);
scanf("%c", &x);

for(i=0;i<strlen(S);i++)
   if (S[i]==x)
      c++;


printf("A letra que você escolheu apareceu %i vezes.", c);

}
