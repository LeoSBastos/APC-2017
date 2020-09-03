#include <stdio.h>

int main(){
int x,y,i,s;
printf("Digite a ordem do triângulo: ");
scanf("%d", &i);
s=i+2;
int v[s][s];
for(y=0;y<s;y++)
    for(x=0; x<s;x++)
        v[y][x]=0;
for(y=0;y<s;y++){
        printf("\n");
        for(x=0;x<y;x++){
          if(x==0) v[y][x]=1;
          else v[y][x]=v[y-1][x-1]+v[y-1][x];
        printf("%d   ", v[y][x]);
        }
}
}
