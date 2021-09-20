#include<stdio.h>
#include<stdlib.h>
#define ex5

/*****************************************************************************

			EXERCICIOS

******************************************************************************

OBS.: Todos os programa devem ser finalizados pelo usuario.*/


#ifdef ex1
/*1 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/

char VerificaLetra();
char letra[14] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
main()
{
    char c;
    for(;;)
    {
        char car;
        printf("Digite uma letra: ");
        scanf(" %c", &car);
        VerificaLetra(car);
            printf("Deseja sair do programa(s/n)? ");
            c = getche();
            tolower(c);g
            system("cls");
            if(c=='s')
            {
                break;
            }
    }
    printf("FIM DO PROGRAMA.");
}
char VerificaLetra(cara)
{
    for(int i=0;letra[i]!='\0';i++)
    {
        if(cara==letra[i])
        {
            printf("A letra estah dentro do Vetor letra[%d]\n", i);
        }
    }
    return(cara);
}
#endif // ex1

#ifdef ex2
/*2 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().*/
int soma(int x, int y);
int subtracao(int x, int y);
int multiplicacao(int x, int y);
float divisao(float x, float y);

main()
{
    for(;;)
    {
        char c;
        int a, b;
        printf("Digite qlqr valor(a): ");
        scanf("%d",&a);
        printf("Digite qlqr valor(b): ");
        scanf("%d",&b);
        printf("\nA soma de %d\n", soma(a,b));
        printf("A subtracao de %d\n", subtracao(a,b));
        printf("A multiplicacao %d\n", multiplicacao(a,b));
        printf("A divisao %f\n", divisao(a,b));

            printf("Deseja sair do programa(s/n)? ");
            c = getche();
            c = tolower(c);
            system("cls");
            if(c=='s')
            {
                break;
            }
    }
    printf("FIM DO PROGRAMA.");
}

int soma(int x, int y)
{
    return(x+y);
}

int subtracao(int x, int y)
{
    return(x-y);
}

int multiplicacao(int x, int y)
{
    return(x*y);
}

float divisao(float x, float y)
{
    float  div;
    div=x/y;
    return(div);
}
#endif // ex2

#ifdef ex3
/*3 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.*/
main()
{
void adicao(float n);
void subtracao(float n);
void multiplicacao(float n);
void divisao(float n);



float acum1,acum2,acum3,acum4;
int main(){



    float n;
    int repeat;



    while(1){
        acum1=0;
        acum2=0;
        acum3=0;
        acum4=0;
        printf("Digite o primeiro numero inteiro:\n");
        scanf("%f",&n);
        acum1=n;
        acum2=n;
        acum3=n;
        acum4=n;
        printf("Resultados Parciais:\nAdicao: %.2f\nSubtracao: %.2f\nMultiplicacao: %.2f\nDivisao: %.2f",acum1,acum2,acum3,acum4);
        while(1){



            printf("\n\nDigite um numero inteiro:(Digite 0 para encerrar)\n");
            scanf("%f",&n);
            if(n==0){
                break;
            }
            adicao(n);
            subtracao(n);
            multiplicacao(n);
            divisao(n);
            printf("\nResultados Parciais:\nAdicao: %.2f\nSubtracao: %.2f\nMultiplicacao: %.2f\nDivisao: %.2f",acum1,acum2,acum3,acum4);
        }
        printf("\nResultados Finais:\nAdicao: %.2f\nSubtracao: %.2f\nMultiplicacao: %.2f\nDivisao: %.2f",acum1,acum2,acum3,acum4);
        printf("\n\nDeseja repetir o programa?(Digite um numero positivo para repetir, negativo para finalizar)\n");
        scanf("%d",&repeat);
        if(repeat<0){
            return 0;
        }
        else{
            continue;
        }
    }
}
void adicao(float n){
    acum1+=n;



}



void subtracao(float n){
    acum2-=n;



}



void multiplicacao(float n){
    acum3*=n;



}



void divisao(float n){
    acum4/=n;



}
}
#endif // ex3

#ifdef ex4
/*4 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).*/
int soma(int x, int y);
int subt(int x, int y);
int multi(int x, int y);
float divis(int x, int y);

main()
{
    int num1, num2, res = 0;
    char op;//operação

    printf("Digite um numero: ");
    scanf("%d",&num1);

    do {
        op = _getche();
        if(op == '=') {
            break;
        }
        printf("\nDigite outro numero: ");
        scanf("%d",&num2);

        switch(op) {
            case '+': res = soma(num1,num2);
                printf("= %d",soma(num1,num2));
            break;
            case '-': res = subt(num1,num2);
                printf("= %d",subt(num1,num2));
            break;
            case '*': res = multi(num1,num2);
                printf("= %d",multi(num1,num2));
            break;
            case '/': res = (int) divis(num1,num2);
                printf("= %2.f", divis(num1,num2));
            break;
        }
        num1 = res;
        printf("\n\n");
    } while(1==1);
    printf("\nUltimo resultado: %d", res);
}

int soma(int x, int y) {
    return x + y;
}

int subt(int x, int y) {
    return x - y;
}

int multi(int x, int y) {
    return x * y;
}

float divis(int x, int y) {
    return (float) x / (float) y;
}
#endif // ex4

#ifdef ex5
/*5 - Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva as funcoes que compare estas 2 strings e retorne se sao IGUAIS 1 e
    se DIFERENTES 0. Declare as strings como variavel global.*/

int ComparaStr();
char str1[11],str2[11];
main()
{
    char resp;
    for(;;)
    {
        printf("Digite a string 1: ");
        gets(str1);
        printf("Digite a string 2: ");
        gets(str2);
        if(ComparaStr()== 1)
        {
            printf("\nAs strings digitadas tem exatamente os mesmos caracteres .");
        }
        else
        {
            printf("\nAs strings possuem conteudo diferente.");
        }
    printf("\n\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N')
        break;
    system("cls");
    }
}

int ComparaStr()
{
    int contWrong=0;
    printf("Comparando...");
    for(int i=0;i<=11;i++)
    {
        if(str1[i] == str2[i]) //compara A com B
        {
            printf("...");
        }
        else if(str1[i] != str2[i])
        {
            contWrong++; //caracteres errados
        }
    }
    if(contWrong == 0)  //Compara se o tamanho da String(str2) tem o mesmo tamanho do contador (contStr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
#endif // ex5

