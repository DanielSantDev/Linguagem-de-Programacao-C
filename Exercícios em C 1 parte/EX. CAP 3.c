#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define ex1
/*********************************************************
			EXERCICIOS
**********************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.
*/
#ifdef ex1
/*1 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double*/
main()
{
    int I[3];
    long int LI[3];
    unsigned int UI[3];
    float F[3];
    double D[3];
    char resp;
    for(;;)
    {
        printf("Digite tre^s numero int: ");
        scanf("%d", &I[0]);
        scanf("%d", &I[1]);
        scanf("%d", &I[2]);
        printf("Digite tre^s numero long: ");
        scanf("%ld", &LI[0]);
        scanf("%ld", &LI[1]);
        scanf("%ld", &LI[2]);
        printf("Digite tre^s numero unsigned: ");
        scanf("%u", &UI[0]);
        scanf("%u", &UI[1]);
        scanf("%u", &UI[2]);
        printf("Digite tre^s numero float: ");
        scanf("%f", &F[0]);
        scanf("%f", &F[1]);
        scanf("%f", &F[2]);
        printf("Digite tre^s numero double: ");
        scanf("%lf", &D[0]);
        scanf("%lf", &D[1]);
        scanf("%lf", &D[2]);
        system("cls");
        printf("        10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
        printf("%5d %20ld %23u\n",I[0],LI[0],UI[0]);
        printf("%17.2e %20.2e\n", F[0], D[0]);
        printf("%5d %20ld %23u\n",I[1],LI[1],UI[1]);
        printf("%17.2e %20.2e\n", F[1], D[1]);
        printf("%5d %20ld %23u\n",I[2],LI[2],UI[2]);
        printf("%17.2e %20.2e\n", F[2], D[2]);
        printf("\nDeseja digitar novamente (s/n)? ");
        resp=getche();
        if(resp == 'n' || resp == 'N'){
            printf("\n\n*********FIM DO PROGRAMA*********\n");
            break;}
        system("cls");
    }
}
#endif

#ifdef ex2
/*2 - Receba via teclado dez valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores em ordem.*/
main(){

    int vetor[10];
    int i; //contador do for externo, responsavel por apontar a posicao que está recebendo o valor atual
    int count; // contador responsavel por apontar para a posicao em que o valor atual esta durante o sort
    int j; // contador responsavel por apontar para a posicao do vetor que sera comparada com o valor atual durante o sort
    int aux; //variavel que auxilia na troca de valores durante o sort
    char resp;
    for(;;)
    {
        for(i=0;i<10;i++){
            printf("Digite o valor da posicao vetor[%d]\n",i);
            scanf("%d",&vetor[i]);
            count=i;
            j=i-1;
            do
            {
                if(i==0)
                {
                    break;
                }
                if(vetor[count]>vetor[j])
                {
                    break;//se o valor atual for maior que o anterior, o loop já é encerrado
                }
                if(vetor[count]<vetor[j])
                {
                    aux=vetor[j];
                    vetor[j]=vetor[count];
                    vetor[count]=aux;
                    count--;
                }
                j--;
            }while(j>=0);
        }
        printf("\n");
        for(i=0;i<10;i++){
            printf("vetor[%d]= %d\n",i,vetor[i]);
        }
    printf("\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N'){
        printf("\n\n*********FIM DO PROGRAMA*********\n");
        break;}
    system("cls");
    }
}
#endif

#ifdef ex3
/*3 - Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor
    via teclado (tamanho 10)*/
main()
{
    int vetor[10],inverso[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Digite o valor do vetor[%d]:\n",i);
        scanf("%d",&vetor[i]);
        inverso[9-i]=vetor[i];
    }
    if(vetor[i] == inverso[i])
    {
        printf("\nO vetor eh palindromo\n");

    }
    else
    {
        printf("\nO vetor nao eh palindromo\n");
    }
}
#endif

#ifdef ex4
/*4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    subtracao "-", subtraia os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.*/
main(){

    int A[2][3],B[2][3],C[2][3];
    int i,j,k;
    char resp;
    for(;;)
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("Digite o valor da posicao A[%d][%d]:\n",i,j);
                scanf("%d",&A[i][j]);
            }
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("Digite o valor da posicao B[%d][%d]:\n",i,j);
                scanf("%d",&B[i][j]);
            }
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                C[i][j]=A[i][j]-B[i][j];
            }
        }
        for(k=0;k<3;k++)
        {
            for(i=0;i<2;i++)
            {
                for(j=0;j<3;j++){
                    if(k==0){
                        printf("A[%d][%d]= %d\n",i,j,A[i][j]);
                    }
                    else if(k==1){
                             printf("B[%d][%d]= %d\n",i,j,B[i][j]);
                    }
                    else if(k==2){
                             printf("C[%d][%d]= %d\n",i,j,C[i][j]);
                    }
                }
            }
            printf("\n\n");
        }
    printf("\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N'){
        printf("\n\n*********FIM DO PROGRAMA*********\n");
        break;}
    system("cls");
    }
}
#endif

#ifdef ex5
/*5 - Receba via teclado valores para uma matriz 5 x 5. Receba via teclado um valor X.
    O programa dever fazer a busca desse valor x na matriz e, ao final escrever a
    localizacao (linha e coluna) ou uma mensagem de ”nao encontrado”.*/

main()
{
    int matriz[5][5];
    int i,j,valor,count=0;
    char resp;
    for(;;)
    {
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("Digite o valor de matriz[%d][%d]:\n",i,j);
                scanf("%d",&matriz[i][j]);
            }
        }

        printf("Digite o valor a ser buscado na matriz\n");
        scanf("%d",&valor);

        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(valor==matriz[i][j])
                {
                    count++;
                    printf("Valor encontrado na posicao matriz[%d][%d]\n",i,j);
                }
            }
        }
        if(count==0)
        {
            printf("Valor nao encontrado\n");
        }
        else
            printf("Valor encontrado %d vezes na matriz",count);

    printf("\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N'){
        printf("\n\n*********FIM DO PROGRAMA*********\n");
        break;}
    system("cls");
    }
}
#endif

