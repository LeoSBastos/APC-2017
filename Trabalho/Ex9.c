#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, tam, espaco, asterisco, x, y, metade;

    printf("Qual o tamanho do seu losango");
    scanf("%i", &tam);

        asterisco=1;
        tam=espaco;
        metade=tam/2;

    printf("Bem vindo ao losango\n\n\n");

    for (x=0; x<metade; x++){ //Começa a parte superior

        for (i=1; i<=espaco; i++) // Da espaco para alinhamento do losango, a cada vez reduz um espaco
            printf(" ");

        espaco--; //Decrementa o espaco

        for (y=0;y<asterisco;y++) //Imprime o losango
             printf("*");

                printf("\n"); // Pula linha
                asterisco+=2; // Adiciona 2 * para cada linha que for impressa
}
    // Atualiza
        asterisco-=2;
        espaco++;

    // Começa a imprimir a parte inferior

    for (x=0; x<metade; x++){

        asterisco-=2; // Reduz 2 * para cada linha do losangulo
        espaco++; // Aumenta o espaço para proxima linha

        for (i=0; i<espaco;i++)
                printf(" ");

        for (y=0; y<asterisco;y++)
            printf("*");

        printf("\n");

    }

    return 0;
}
