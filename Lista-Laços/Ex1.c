#include<stdio.h>


int main(){

int x;

printf("1-Prato1\n2-Prato2\n3-Prato3\n4-Prato4\n5-Sair\n");
scanf("%i", &x);

switch(x){

case 1:
    printf("Prato1");
break;
case 2:
    printf("Prato2");
break;
case 3:
    printf("Prato3");
break;
case 4:
    printf("Prato4");
break;
default:
    printf("Adeus Otários!");
}
return(0);
}
