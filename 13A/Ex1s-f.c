#include<stdio.h>
#include<stdlib.h>

void main(){
int i,j,det,trans[3][3],mult[3][3],M[3][3],x;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
            printf("Digite um valor para a matriz: ");
            scanf("%d", &M[i][j]);}
    printf("Digite um escalar: ");
    scanf("%d", &x);
    det=(M[0][0]*M[1][1]*M[2][2])+(M[1][0]*M[2][1]*M[0][2])+(M[2][0]*M[0][1]*M[1][2])-(M[1][0]*M[0][1]*M[2][2])-(M[0][0]*M[2][1]*M[1][2])-(M[2][0]*M[1][1]*M[0][2]);
    printf("A determinante da sua matriz é: %d\n",det);

    for(j=0;j<3;j++)
        for(i=0;i<3;i++)
                trans[i][j]=M[j][i];
    printf("\nA matriz transposta é: \n");
      for(j=0;j<3;j++){
        printf("\n");
        for(i=0;i<3;i++)
            printf("%d   ", trans[i][j]);}

        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            mult[i][j]=M[i][j]*x;

    printf("\n \n A matriz multiplicada pelo escalar é: \n");
        for(j=0;j<3;j++){
            printf("\n");
            for(i=0;i<3;i++)
                printf("%d   ", mult[i][j]);}
}

