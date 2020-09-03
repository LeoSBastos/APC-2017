#include<stdio.h>
#define tam 10

int main(){

char s;
int c;
float X[tam], Y[tam], Z[tam];


    for(c=0;c<10;c++){

        printf("Digite o %d º valor do vetor X: ", c+1);
        scanf("%f", &X[c]);
}
    for(c=0;c<10;c++){
        printf("Digite o %d º valor do vetor Y: ", c+1);
        scanf("%f", &Y[c]);
}

        printf("Qual operação você quer A-Diferença, B-Soma, C-Produto: ");
        __fpurge(stdin);
        scanf("%c", &s);

    switch(toupper(s)){

        case('A'):
            for(c=0;c<10;c++){

                Z[c]=X[c]-Y[c];
                printf("%.1f, ", Z[c]);}
            break;

        case('B'):
            for(c=0;c<10;c++){

                Z[c]=X[c]+Y[c];
                printf("%.1f, ", Z[c]);}
            break;

        case('C'):
        for(c=0;c<10;c++){

                Z[c]=X[c]*Y[c];
                printf("%.1f, ", Z[c]);
        break;

}
        default: break;


}
    printf("\nBye!");
}
