#include<stdio.h>
#include<stdlib.h>


void main(){

int X[3][5][2],Y[15],h,i,j,l=1,v=0;

    for(h=0;h<3;h++)
        for(i=0;i<5;i++)
            for(j=0;j<2;j++,l++)
                X[h][i][j]=l;


    for(h=0;h<3;h++)
        for(i=0;i<5;i++)
            for(j=0;j<2;j++)
                if(X[h][i][j]%2==0){
                    Y[v]=X[h][i][j];
                    v++;}
                else continue;


    for(h=0;h<3;h++)
        for(i=0;i<5;i++)
            for(j=0;j<2;j++,l++)
                if(X[h][i][j]>10&&X[h][i][j]%2==1)
                    printf("%d    ", X[h][i][j]);

    printf("\n\n\n");

    for(v=0;v<15;v++)
        printf("%d    ", Y[v]);

}
