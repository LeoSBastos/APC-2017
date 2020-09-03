#include<stdio.h>

void primo(){

int i,limi,limf,aux;
    for(limi=2,limf=1000,aux=0;limi<limf;limi++){
        aux=0;
        for(i=2;i<limi;i++){
            if(limi%i==0){
            aux=1;
            break;}}
        if (aux==0)
            printf("%d\n", limi);}
return(0);}

void main(){
int m;
primo();
}
