#include <stdio.h>
#include <conio.h>

#define ex2
/****************************************************************************
			EXERCICIOS
*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.*/

#ifdef ex1
/*1 - Escreva um programa que receba via teclado usando ponteiros um char,
    int, long, unsigned,float, double, unsigned long e unsigned char,
    e imprima-os no video utilizando ponteiros e o operador de conteudo *
    no seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char
*/
main()
{
    char resp;
    char *pa, a;
    int *pb, b;
    long *pc, c;
    unsigned *pd, d;
    float *pe, e;
    double *pf, f;
    unsigned long *pg, g;
    unsigned char *ph, h;
    pa=&a;
    pb=&b;
    pc=&c;
    pd=&d;
    pe=&e;
    pf=&f;
    pg=&g;
    ph=&h;
    for(;;)
    {

        system("cls");
        printf("Digite um dado do tipo char: ");
        *pa=getchar();
        printf("Digite um dado do tipo int: ");
        scanf("%d", pb);
        printf("Digite um dado do tipo long: ");
        scanf("%ld", pc);
        printf("Digite um dado do tipo unsigned: ");
        scanf("%u", pd);
        printf("Digite um dado do tipo float: ");
        scanf("%f", pe);
        printf("Digite um dado do tipo double: ");
        scanf("%lf", pf);
        printf("Digite um dado do tipo unsigned long: ");
        scanf("%lu", pg);
        printf("Digite um dado do tipo unsigned char: ");
        getchar();
        scanf("%c", ph);
        system("cls");
        printf("        10        20        30        40        50        60\n");
        printf("123456789012345678901234567890123456789012345678901234567890\n");
        printf("    %-6d              %-11ld         %-5d\n", *pb, *pc, *pd);
        printf("              %-8.2e            %-8.2e            %c\n", *pe, *pf, *pa);
        printf("         %-10lu          %c\n", *pg, *ph);
        system("pause");
        printf("Deseja fazer mais uma vez? (s/n) : ");
        getchar();
        resp=getchar();
        getchar();
        if(resp == 'n' || resp == 'N')
            break;
    }
    printf("FIM DO PROGRAMA!!!");
}
#endif // ex1

#ifdef ex2
/*2 - Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados pelo teclado usando ponteiros e imprima-os no video
    também usando ponteiros. Utilize um comando de loop. (vetor de estruturas)
              nome, end, cidade, estado, cep */
struct cadastro
{
    char nome[30];
    char end[50];
    char cidade[20];
    char estado[20];
    char cep[9];
};
struct cadastro usuario[4];

main()
{
    int opcao, i=0, x;
    struct cadastro *p;
    p=&usuario[0];
    for( ; ; )
    {
        printf("Digite 1 para ");
    }
}
#endif // ex2

/*3 - Receba um caracter via teclado usando ponteiros e compara com o vetor abaixo
    usando ponteiros. Mostre como resultado se são EXISTE ou NAO EXISTE.
    vetor -> b,d,f,h,j,l,m,o,q,s,u,w,y

4 - Receba 2 string de ate 10 caracteres via teclado, compare-as usando ponteiros
    e mostre como resultado se são IGUAIS ou DIFERENTES.

5 - Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado. Todos os calculos devem ser
    feitos usando ponteiro.

6 - Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
    leia duas datas e armazene nessa estrutura usando ponteiros. Calcule e exiba o
    numero de dias que decorreram entre as duas datas usando ponteiros.*/
