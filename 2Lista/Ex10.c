#include<stdio.h>

int mdc(int x, int y){
int c,r;
    if (x<y)
        for(c=1; c<x; c++)
            if(x%c==0&&y%c==0)
            r=c;
    else if (y<x)
        for(c=1; c<y; c++)
            if(x%c==0&&y%c==0)
            r=c;
    else r=x;
return(r);}

void main(){
int x,y,m;

printf("Digite o 1º número: ");
scanf("%d", &x);
printf("Digite o 2º número: ");
scanf("%d", &y);

m=mdc(x,y);

printf("O maior divisor comum entre %d e %d é %d.", x,y,m);


}
