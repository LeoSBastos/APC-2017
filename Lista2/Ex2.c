#include<stdio.h>

int main () {

int n,c;

    printf("Digite a quantidade de números reais que serão digitados :");
    scanf("%i", &n);

float reais[n],nma,nme,me=0,i=0;

    for(c=0;c<n;c++){

        printf("Digite o %i ° número real: ", c+1);
        scanf("%f", &reais[c]);
        me+=reais[c];
}


    nma=reais[0];
    nme=reais[0];
    me=me/n;

    for(c=0;c<n;c++){

        if (reais[c]>nma)
        nma=reais[c];
            else if (reais[c]<nme)
            nme=reais[c];

        if (reais[c]>=me)
        i++;
            else continue;

}

    printf("O maior valor é %f\nO menor valor é %f\nA média é %f\nTiveram %f números iguais ou maior que a média", nma, nme, me, i);


}
