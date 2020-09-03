tipo (int ou void) nome_da_funcao(tipo 1 param1, tipo param2, ...)

return = retorno da função e é a última instrução executada

parâmetros podem ser vazios ou terá o tipo e o nome de cada variável separados por vírgula(,)

Ex1

int quadrado(int x){
    return x*x
    }

    void main(){

    int a, b;
    printf("digite o valor de um número inteiro: ");
    scanf("%d", &a);

    b=quadrado(a);
    printf("O quadrado é %d é %d", a,b);
    getch();}

    Regras de escopo


    int x;
    int teste(int a, int b);
    {if(a<b)
    return(b+x);
    else return (a+x);}

    void main(){
    int c;


    c=teste(10,5);}

    Passagem de parâmetro por valor

    int fcao1(int x, int y){
    x+=y;
    printf("x=%d e y=%d\n", x,y);
    return(x);}

    void main(){
    int x,y,z;
    x=10;
    y=5;
    z=fcao1(x,y);
    printf("x=%d, y=%d e z%d\n", z,y,z);

    Passagem de parâmetro por referência

    int fcao1(int *x, int *y){
    *x+=*y;
    printf("x=%d e y=%d\n", *x,*y);
    return(*x);}

    void main(){
    int x,y,z;
    x=10;
    y=5;
    z=fcao1(&x,&y);
    printf("x=%d, y=%d e z%d\n", z,y,z);




    }
