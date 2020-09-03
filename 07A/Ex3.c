#include<stdio.h>
#include<string.h>

int main(){

char x[100];
int i, y;

printf("Digite uma palavra: ");
scanf("%s", &x);

printf("A nova palavra é: ");
for(i=0;i<strlen(x);i++){

y=(int)x[i]+1;
printf("%c", (char)y);
}

}
