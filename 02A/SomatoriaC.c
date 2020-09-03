    #include<stdio.h>

    int main(){
    //variaveis
int x, n;
double s=1  ;

printf("Digite seu numero: ");
scanf("%i", &x);

n=x-1;

//processos
if (x<1)
printf("Error");
    else if(x==1)
    printf("Sua somatória é %lf", s);
    else while (x>1){
        s+=(double)n/x;
        n--;
        x--;
        }
        printf("Sua somatória é %lf", s);
}
