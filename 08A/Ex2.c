#include<stdio.h>
#include<string.h>

int main(){
int i;
char S[51],x,y;
printf("Digite a string ");
scanf("%s", &S);

printf("\nDigite o caractere que você deseja trocar: ");
__fpurge(stdin);
scanf("%c", &x);

printf("\nDigite o caractere que você deseja que substitua: ");
__fpurge(stdin);
scanf("%c", &y);

for(i=0;i<strlen(S);i++)
   if (S[i]==x)
      S[i]=y;


printf("A nova palavra é: %s", S);

}
