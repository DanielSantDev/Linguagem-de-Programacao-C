#include "stdio.h"

#define ex2

#ifdef ex1
/*1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    Receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long
*/
main()
{
    for(;;)
    {
        char resp;
        struct estrutura
        {
           char c;
           int A;
           long B;
           float C;
           double D;
           unsigned char E;
           unsigned int F;
           unsigned long G;
        };

       struct estrutura membro;

       printf("Digite uma letra: ");
       scanf( "%c",&membro.c);
       printf("Digite um dado do tipo int: ");
       scanf("%d", &membro.A);
       printf("Digite um dado do tipo long: ");
       scanf("%ld", &membro.B);
       printf("Digite um dado tipo float: ");
       scanf("%f", &membro.C);
       printf("Digite um dado tipo double: ");
       scanf("%lf", &membro.D);
       printf("Digite um dado tipo unsigned char: ");
       scanf(" %c", &membro.E);
       printf("Digite um dado tipo unsigned int: ");
       scanf("%u", &membro.F);
       printf("Digite um dado tipo unsigned long: ");
       scanf("%u", &membro.G);

       printf("            10        20        30        40        50        60        70\n");
       printf("    1234567890123456789012345678901234567890123456789012345678901234567890\n");
       printf("%9c%10d%10ld%20f%20lf\n", membro.c, membro.A, membro.B, membro.C, membro.D);
       printf("%10c%21d%21ld\n\n", membro.E, membro.F, membro.G);
       printf("Deseja Sair?(s/n) ");
       resp=getche();
       if(resp == 'S' || resp == 's')
       {
           break;
       }
       system("cls");
    }
   printf("FIM DO PROGRAMA.");
}
#endif // ex1



#ifdef ex2
/*2 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video. Faça um
    menu. (vetor de estruturas)
		nome, end, cidade, estado, cep*/
main()
{
    struct estrutura
    {
        char nome[30], end[50], cidade[15], estado[3];
        int cep[9]
    };

    struct estrutura dado;


}
#endif // ex2

#ifdef ex3
/*3 - Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto*/
main()
{

}
#endif // ex3
