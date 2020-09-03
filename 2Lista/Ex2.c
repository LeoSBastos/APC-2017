#include<stdio.h>


int main(){

int i,p,N;

printf("Digite N: ");
scanf("%d", &N);

for(i=2,p=1;i<N;i++)
if(N%i==0)
p=0;

if(p==0)
printf("N é bacana!");
else printf("N não é bacana!");





}
