#include<stdio.h>
#include<string.h>

int main(){

char x[21],y[21],z[21];
float xn, yn, zn;

    printf("Digite o nome do 1 aluno: ");
    scanf("%s", &x);
    printf("Digite a nota do 1 aluno: ");
    scanf("%s", &xn);

    printf("Digite o nome do 2 aluno: ");
    scanf("%s", &y);
    printf("Digite a nota do 2 aluno: ");
    scanf("%s", &yn);

    printf("Digite o nome do 3 aluno: ");
    scanf("%s", &z);
    printf("Digite a nota do 3 aluno: ");
    scanf("%s", &zn);

    if(xn>yn && yn>zn)
        printf("A ordem dos alunos é: %s, %s, %s, o aluno da maior nota é %s e o da menor nota é %s", x,y,z,x,z);
        else if(yn>xn && xn>zn)
            printf("A ordem dos alunos é: %s, %s, %s, o aluno da maior nota é %s e o da menor nota é %s", y,x,z,y,z);
            else if(zn>yn && yn>xn)
                printf("A ordem dos alunos é: %s, %s, %s, o aluno da maior nota é %s e o da menor nota é %s", z,y,x,z,x);
                else if(zn>xn && xn>yn)
                    printf("A ordem dos alunos é: %s, %s, %s, o aluno da maior nota é %s e o da menor nota é %s", z,x,y,z,y);
                    else if(yn>zn && zn>xn)
                        printf("A ordem dos alunos é: %s, %s, %s, o aluno da maior nota é %s e o da menor nota é %s", y,z,x,y,x);
                        else
                            printf("A ordem dos alunos é: %s, %s, %s, o aluno da maior nota é %s e o da menor nota é %s", x,z,y,x,y);


}

