#include<stdio.h>

void tab(){

int x,y,z;

    for(x=1;x<10;x++)
        for(y=1;y<10;y++){
            z=x*y;
            printf("%d x %d = %d\n", x,y,z);
}
}
void main(){
 int m=0;
    tab();
}
