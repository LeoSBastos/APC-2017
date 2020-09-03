#include<stdio.h>
//biblioteca padrão
#include<string.h>
//biblioteca string
#include<conio.h>
//biblioteca que só tem no windows


//funções do string
strcat(string_destino, string origem)
//Concatena string_origem no fim da string_destino
strcmp(string1, string2)
//Faz a comparação(ordem alfabética) de duas strings e retorna:
//0 se a duas strings forem iguais
//<0 se string 1 for menor que string2
//>0 se string 1 for maior que string2
strlen(string)
//Retorna a qtde de caracteres armanzenadas na string
strcpy(string_destino, string_origem)
//Copia string_origem sobre a string_destino


//funções do conio
gets(string)
//lê string, e permite ler strings com espaço em branco, até encontrar um enter(scanf não vê espaços em branco)
puts(string)
//escreve string
fflush(stdin)
//limpa o buff
