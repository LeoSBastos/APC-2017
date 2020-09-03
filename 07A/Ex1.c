#include<string.h>
#include<stdio.h>

int main() {
char x[21], y[21];
int c;

printf("Digite o 1 nome: ");
scanf("%s", &x);

printf("Digite o 2 nome: ");
scanf("%s", &y);

c=strcmp(x, y);

if (c<0)
printf("%s\n%s", x,y);
else if (c>0)
printf("%s\n%s", y,x);
else
printf("O nome são iguais.");
}
