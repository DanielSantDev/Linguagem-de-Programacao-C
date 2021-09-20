#include<stdio.h>
#define ex1

#ifdef ex1
/*1 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte:
    formato:
             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/
main()
{
    short int si;
    long int ld;
    int i;
    float f;
    double d;
    char c;

    printf("Digite um numero do tipo short: ");
    scanf("%d",&si);
    printf("Digite um numero do tipo long: ");
    scanf("%ld",&ld);
    printf("Digite um numero do tipo int: ");
    scanf("%d",&i);
    printf("Digite um numero do tipo float: ");
    scanf("%f",&f);
    printf("Digite um numero do tipo double: ");
    scanf("%lf",&d);
    printf("Digite um numero do tipo char: ");
    scanf(" %c",&c);

    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("%9d%18d%22d\n", si, ld, i);
    printf("%19.2e %20.2le %19c", f, d, c);
}
#endif ex1

#ifdef ex2
/*2 - Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/
main()
{
    int tempo, horas, minutos, segundos;
    printf("Digite o tempo: ");
    scanf("%d", &tempo);
    horas=tempo/3600; //3600 representa 1h
    minutos=(tempo-(horas*3600))/60; //subtrai o numero de horas e multiplica por 60
    segundos=(tempo-(horas*3600+(minutos*60)));
    printf("%dh %dm %ds", horas, minutos, segundos);
}
#endif // ex2

#ifdef ex3
/*3 - Escreva um programa para ler um numero inteiro, positivo de tres digitos, e gere
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321*/
main()
{
int i, j; //contador
char num[3], numInvertido[3];
printf("Digite o numero: ");
gets(num);
    for(int i = 0, j = 2; i < 3; i++, j--)
        numInvertido[j] = num[i];
    for(i = 0; i < 3; i++)
        printf("%c", numInvertido[i]);
}
#endif // ex3

#ifdef ex4
/*4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar. (troca os valores das viariáveis)*/
main()
{
    int a=10, b=20;
    printf("Valores Iniciais de A: %d   e  B: %d\n",a,b);
    a=a+b;//10+20=30
    b=a-b;//30-20=10
    a=a-b;//30-10=20
    printf("Valores Finais de A: %d   e  B: %d",a,b);
    getchar();
}
#endif // ex4

#ifdef ex5
/*5 - Escreva um programa que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $10, $5, $2 e $1 em que o valor lido pode ser
    decomposto. Escrever o valor lido e a relação de notas necessárias.*/
main()
{
    int valor, n100, n50, n10, n5, n2, n1, valorI;
    printf("Digite o valor em R$: ");
    scanf("%d", &valor);
    valorI=valor;
        n100=valor/100;
        valor=valor-(n100*100);
        n50=valor/50;
        valor=valor-(n50*50);
        n10=valor/10;
        valor=valor-(n10*10);
        n5=valor/5;
        valor=valor-(n5*5);
        n2=valor/2;
        valor=valor-(n2*2);
        n1=valor;
        valor=valor-(n1*1);
    printf("O valor digitado eh de: %d\n", valorI);
    printf("Notas de 100: %d   Notas de 50: %d\n", n100, n50);
    printf("Notas de 10: %d   Notas de 5: %d\n", n10, n5);
    printf("Notas de 2: %d   Notas de 1: %d", n2, n1);
}
#endif // ex5
