#include<stdio.h>

int main(){

int A[3][3],B[3][3],S[3][3],P[3][3],i,j,deta;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            printf("Digite um número da matriz A: ");
            scanf("%d", &A[i][j]);}

    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            printf("Digite um número da matriz B: ");
            scanf("%d", &B[i][j]);}

    printf("\nA soma é:");

    for(j=0;j<3;j++){
        printf("\n");
        for(i=0;i<3;i++){
        S[i][j]=A[i][j]+B[i][j];
        printf("%d", S[i][j]);}}

    printf("\n\nO produto é:");

    for(j=0;j<3;j++){
        printf("\n");
        for(i=0;i<3;i++){
        P[i][j]=A[i][j]*B[i][j];
        printf("%d", P[i][j]);}}

    deta=(A[0][0]*A[1][1]*A[2][2])+(A[1][0]*A[2][1]*A[0][2])+(A[2][0]*A[0][1]*A[1][2])-(A[1][0]*A[0][1]*A[2][2])-(A[0][0]*A[2][1]*A[1][2])-(A[2][0]*A[1][1]*A[0][2]);
    printf("\n\nA determinante de A é: %d", deta);
}
