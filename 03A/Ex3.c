#include<stdio.h>


int main(){

int x,s,n,m;

for(s=0,n=0;x!=-1; n++){
printf("\nDigite x: ");
scanf("%i", &x);
if(x==-1) break;
s+=x;
}
printf("Sua soma foi: %i", s);
if (n==0)
n+=1;
m=s/n;
printf("Sua média é: %i", m);

}
