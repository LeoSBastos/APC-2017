#include<stdio.h>


int main(){

int c;
float S[20], A;

    printf("Digite o valor a ser multiplicado: ");
    scanf("%f", &A);

    for(c=0;c<20;c++){

        printf("Digite o %d º valor do vetor S: ", c+1);
        scanf("%f", &S[c]);

}
    printf("O produto do vetor é: [");

    for(c=0;c<20;c++){

        S[c]*=A;
        printf("%.1f, ", S[c]);
}
    printf("]");




}
