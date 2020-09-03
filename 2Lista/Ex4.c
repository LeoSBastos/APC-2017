#include<stdio.h>
#include<string.h>

int main(){
int i,c=0;
char S[51];

printf("Digite a string ");
scanf("%s", &S);

for(i=0;i<strlen(S);i++)
    switch(tolower(S[i])){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            c++;
            break;
}

printf("São %d vogais", c);

}

