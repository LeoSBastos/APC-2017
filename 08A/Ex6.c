#include<stdio.h>
#include<string.h>


int main(){

int i=0,c=0,x=0;
char S1[51], S2[51];

    printf("Digite a string S1: ");
    scanf("%s", &S1);
    printf("\nDigite a string S2: ");
    scanf("%s", &S2);

    for(;;){
        if (x==strlen(S1)||c==strlen(S2))
        break;
        if (S1[x]==S2[i]){
                c++; x++;i++;}
        else{i++;c=0;x=0;}
    }
    if(c==strlen(S1))
        printf("\nS1 pertence em S2.");
    else
        printf("S1 não pertence em S2.");
        printf("\n");

    for(x=strlen(S1)-1;x>=0;x--)
        printf("%c", S1[x]);

        printf("\n");
    for(i=0;i<strlen(S1);i++){
        if(i%2==1)
        printf("%c", toupper(S1[i]));
        else  printf("%c", (S1[i]));
}

}
