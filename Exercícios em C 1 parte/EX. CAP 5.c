#include<stdio.h>
#include<stdlib.h>
#define ex1

/**********************************************************************

			EXERCICIO

***********************************************************************/
//OBS.: Faça um loop infinito e defina uma saida em todos os exercícios.

#ifdef ex1
/*1 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.
*/
main()
{
    char c;
    do
    {
    int a,b;

    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite outro numero: ");
    scanf("%d",&b);
    printf("A + B = %d\n",a+b); //soma
    printf("A - B = %d\n",a-b); //subtração
    printf("A * B = %d\n",a*b); //multiplicação
    printf("A / B = %.2f\n",(float)a/b); //divisão

    do
    {
        printf("Gostaria de continuar? (s/n)");
        c = getche();
        c = tolower(c);
        system("cls\n");
    }while((c!='s')&&(c!='n'));
    }while(c=='s');
}
#endif // ex1

#ifdef ex2
/*2 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.*/
main()
{
    char c;
    do
    {
    int a,b,x;
    printf("Digite um numero: ");
    scanf("%d",&a);
    x=a;  //passa o valor de a para x

    printf("Digite outro numero: ");
    scanf("%d",&b);

    printf("A += B = %d\n",a+=b); //soma
    a=x;
    printf("A -= B = %d\n",a-=b); //subtração
    a=x;
    printf("A *= B = %d\n",a*=b); //multiplicação
    a=x;
    printf("A /= B = %d\n",a/=b); //divisão
    do
    {
        printf("Gostaria de continuar? (s/n)");
        c = getche();
        c = tolower(c);
        system("cls\n");
    }while((c!='s')&&(c!='n'));
    }while(c=='s');
}
#endif // ex2

#ifdef ex3
/*3 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.*/
main()
{
    char c = 's';
    for(int i=0;c=='s';i++)
    {
        int a,b;
        printf("Digite um numero: ");
        scanf("%d",&a);
        printf("Digite outro numero: ");
        scanf("%d",&b);
        printf("\n\n******BIT-A-BIT******\n\n");
        printf("        (AND) |HEXADECIMAL a&b = %x  |DECIMAL a&b = %d\n",a&b,a&b);
        printf("        (OU)  |HEXADECIMAL a|b = %x  |DECIMAL a|b = %d\n",a|b,a|b);
        printf("(OU EXCLUSIVO)|HEXADECIMAL a^b = %x  |DECIMAL a^b = %d\n",a^b,a^b);
        do
        {
            printf("\nGostaria de continuar(s/n)?");
            c=getche();
            c=tolower(c);
            system("cls");
        }while(c!='s' && c!='n');
    }
}
#endif // ex3

#ifdef ex4
/*4 - Escreva um programa que receba um numero inteiro via teclado, divida-o
    por 8 e multiplique-o por 8 utilizando os operadores de deslocamento.
    Imprima no video o numero recebido e os resultados obtidos.*/
main()
{
    char c;
    for(;;)
    {
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);
    a=a>>3; //2 elevado a 3ª
    printf("Deslocamento a direita(/)  |a >> 8: %d\n",a);//desloca para direita em 1 bit
    a=a<<3;
    printf("Deslocamento a esquerda(*) |a << 8: %d\n",a);//desloca para esquerda em 1 bit
    printf("\nDeseja continuar(s/n)? ");

    c = getche();
    c = tolower(c);
    system("cls");
    if(c == 'n')
        break;
    }
}
#endif // ex4

#ifdef ex5
/*5 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual.
*/
main()
{
    char c;
    for(;;)
    {
        int dia1,mes1,ano1,dia2,mes2,ano2,dia,mes,ano;
        printf("Digite o dia do nascimento:");
        scanf("%d",&dia1);
        printf("Digite o mes do nascimento:");
        scanf("%d",&mes1);
        printf("Digite o ano do nascimento:");
        scanf("%d",&ano1);
        printf("Digite o dia atual:");
        scanf("%d",&dia2);
        printf("Digite o mes atual:");
        scanf("%d",&mes2);
        printf("Digite o ano atual:");
        scanf("%d",&ano2);

        if(mes2>=mes1)//verifica mes
        {
            if(dia2>=dia1)//verifica dia
            {}
            else
            {
                ano--;
            }
        }
        else //se o mes ñ estiver de acordo = ano-1
        {
            ano--;
        }
        printf("A sua idade eh %d.\n",ano);
        printf("Deseja continuar(s/n)?");
        c=getche();
        c = tolower(c);
        system("cls");
        if(c == 'n')
        break;
    }
}
#endif // ex5

#ifdef ex6
/*6 - Escreva um programa para determinar o dia da semana de uma determinada
    data (dia, mes e ano).*/
char diasSemana[8][8]={{"domingo"},{"segunda"},{"terca"},{"quarta"},{"quinta"},{"sexta"},{"sabado"}};   //matriz de strings dos dias da semana
char diasSemanaInv[8][8]={{"domingo"},{"sabado"},{"sexta"},{"quinta"},{"quarta"},{"terca"},{"segunda"}}; //matriz de strings dos dias da semana invertidos
int vetorAnoNormal[12]={31,28,31,30,31,30,31,31,30,31,30,31}; //vetor com o numero de dias de cada mes do ano normal
int vetorBissexto[12]={31,29,31,30,31,30,31,31,30,31,30,31};  //vetor com o numero de dias de cada mes do ano bissexto



bool bissexto(int ano);  // função que retorna se o ano é bissexto ou não

int main(){


    int dia,mes,ano,i,repeat;
    long dataEscolhida,dataReferencia,aux;


    while(1){
        dataEscolhida=0;
        dataReferencia=0;
        aux=0;



        printf("Entre com o ano:\n");
        scanf("%d",&ano);
        printf("Entre com o mes:\n");
        scanf("%d",&mes);
        printf("Entre com o dia:\n");
        scanf("%d",&dia);



        for(i=1;i<ano;i++){
            if(bissexto(i)==true){
                dataEscolhida+=366;
            }
            else{
                dataEscolhida+=365;
            }
        }
        for(i=0;i<mes-1;i++){
            if(bissexto(ano)==true){
                dataEscolhida+=vetorBissexto[i];
            }
            else{
                dataEscolhida+=vetorAnoNormal[i];
            }
        }
        dataEscolhida+=dia;



        for(i=1;i<2020;i++){
            if(bissexto(i)==true){
                dataReferencia+=366;
            }
            else{
                dataReferencia+=365;
            }
        }
        for(i=0;i<8;i++){
            dataReferencia+=vetorBissexto[i];
        }
        dataReferencia+=20;
        if(dataReferencia>=dataEscolhida){
            aux=dataReferencia-dataEscolhida;
            aux%=7;
            printf("\nDia da semana= %s\n\n",diasSemanaInv[aux]);
            printf("deseja repetir o programa?(numero positivo para repetir,negativo para encerrar)\n");
            scanf("%d",&repeat);
            if(repeat>0){
                continue;
            }
            else{
                break;
            }
        }



        else{
            aux=dataEscolhida-dataReferencia;
            aux%=7;
            printf("\nDia da semana= %s\n\n",diasSemana[aux]);
            printf("deseja repetir o programa?(numero positivo para repetir,negativo para encerrar)\n");
            scanf("%d",&repeat);
            if(repeat>0){
                continue;
            }
            else{
                break;
            }
        }
    }
}



bool bissexto(int ano){



    if(ano%400==0){
        return true;
    }
    if(ano%100!=0 && ano%4==0){
        return true;
    }



    return false;
}
#endif // ex6
