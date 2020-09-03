#include<stdio.h>


int main(){

int i,f,s;

printf("Digite início: ");
scanf("%i", &i);

printf("Digite final: ");
scanf("%i", &f);

for (s=0;i<f; i++){
if(i%2==1) continue;
s+=i;
}

printf("Sua soma é %i", s);
}
