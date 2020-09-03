#include<stdio.h>
#include<string.h>

int main(){

char nome[3][21], t[21];
float nota[3], temp;
int i, j;

    for(i=0;i<3;i++){
        printf("\n Digite nome");
        __fpurge(stdin);
        scanf("%s", &nome[i]);
        printf("\n Digite nota");
        scanf("%f", &nota[i]);
    }
    for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
            if(nota[i]>nota[j]){
                temp=nota[i];
                nota[i]=nota[j];
                nota[j]=temp;
                strcpy(t,nome[i]);
                strcpy(nome[i],nome[j]);
                strcpy(nome[j],t);
        }

}
