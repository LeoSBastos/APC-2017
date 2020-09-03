#include <stdio.h>

int main(){

int M[6][6],i,j,qm=0,qp=0;	

for(i=0;i<6;i++)
	for(j=0;j<6;i++){
		printf("Digite um número inteiro: \n");
		scanf("%d", &M[i][j]);}


for(i=0;i<6;i++)
	for(j=0;j<6;i++){
		if(M[i][j]>10)
			qm++;
		if(M[i][j]%2==0)
			qp++; 

}

printf("O número de inteiros maior que 10 é %d e de inteiros pares é %d", qm, qp);







}