#include<stdio.h>
#include<stdlib.h>
#define ex5
/***********************
        EXERCICIOS
************************/

#ifdef ex1
/*OBS.: Todos os programa devem ser finalizados pelo usuario.
1 - Escreva um programa para receber 5 nomes, com até 7 caracteres,
via teclado e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3*/
main()
{
    char nome1[8], nome2[8], nome3[8], nome4[8], nome5[8],resp;
    int i;
    for(;;)
    {
    printf("Digite um nome1: ");
    gets(nome1);
    printf("Digite um nome2: ");
    gets(nome2);
    printf("Digite um nome3: ");
    gets(nome3);
    printf("Digite um nome4: ");
    gets(nome4);
    printf("Digite um nome5: ");
    gets(nome5);
    printf("        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("%7s %40s\n", nome1, nome5);
    printf("%17s %19s\n", nome2, nome4);
    printf("%27s\n", nome3);
    printf("\n\nDeseja fazer novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N')
    break;
    system("cls");
    }
    printf("\nFim do programa");
}
#endif // ex1

#ifdef ex2
/*2 - Escreva um programa para receber 3 strings de ate 10 caracteres cada via
    teclado e imprima-as no video no seguinte formato:
    (utilize vetores multidimensionais)

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        string1             string2             string3*/
main()
{
    char str[3][11],resp;
    for(;;)
    {
    printf("Digite o vetor1: ");
    gets(str[0]);
    printf("Digite o vetor1: ");
    gets(str[1]);
    printf("Digite o vetor1: ");
    gets(str[2]);
    printf("        10        20        30        40        50        60\n");
    printf("123456789012345678901234567890123456789012345678901234567890\n");
    printf("%11s%20s%20s\n",str[0],str[1],str[2]);
    printf("\n\nDeseja fazer novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N')
    break;
    system("cls");
    }
    printf("\nFim do programa");
}
#endif // ex2

#ifdef ex3
/*3 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.*/
main()
{
    char str[11],resp;
    for(;;)
    {
        printf("****CONVERSAO DE UMA CADEIA DE CARACTERES MINUSCULAS P/ MAIUSCULAS ****\n");
        printf("****DIGITE QLQR NOME: ");
        gets(str);
        printf("****NOME DIGITADO: ");
        for(int i=0; str[i] != '\0';i++)
        {
            printf("%c", str[i]-32);//+32 CONVERTE EM LETRAS MINUSCULAS PELA TAB. ASCII
        }
    printf("\n\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N')
    break;
    system("cls");
    }
}
#endif // ex3

#ifdef ex4
/*4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.*/
main()
{
    char str[11],resp;
    for(;;)
    {
        printf("****CONVERSAO DE LETRAS MAIUSCULAS P/ MINUSCULAS****\n");
        printf("****DIGITE QLQR NOME: ");
        gets(str);
        printf("****NOME DIGITADO: ");
        for(int i=0;str[i] != '\0';i++)
        {
            printf("%c", str[i]+32);//+32 CONVERTE EM LETRAS MINUSCULAS PELA TAB. ASCII
        }
    printf("\n\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N')
        break;
    system("cls");
    }
}
#endif // ex4

#ifdef ex5
/*
Receba 2 string de ate 10 caracteres via teclado, compare-as mostrando como
resultado se são IGUAIS ou DIFERENTES.*/
main()
{
    char str1[11],str2[11],resp;
    int i,contStr12=0,contStr1=0;
    for(;;)
    {
    printf("Digite a primeira string: ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);
    printf("Comparando.........\n");
    for(i=0;i<11;i++)
    {
        if(str1[i] == str2[i]) //compara A com B
        {
            printf("A posicao[%d]das duas strings sao Iguais\n", i);
            contStr12++;  //Conta a qtd de caracteres semelhantes(mesma posição no vetor) e o tamanho
        }
        else
        {
            printf("A posicao[%d]das duas strings sao diferente.\n", i);
            printf("\nAS STRINGS POSSUEM CONTEUDO DIFERENTE.\n");
            break;
        }
    }
    for(i=0;str1[i] != '\0';i++)
    {
       contStr1++; //tamanho de str1
    }
    if(contStr12 == contStr1)
    {
        printf("\nAs strings digitadas tem EXATAMENTE os mesmos caracteres.\n");
    }
    printf("\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N')
        break;
    system("cls");
    }
}
#endif // ex5

#ifdef ex6
main()
{
    char str1[30],str2[30],resp;
    int contStr=0; //Contar caracteres da string
    for(;;)
    {
    printf("Digite a primeira string: ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);
    printf("Comparando...");
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i] == str2[i]) //compara A com B
        {
            contStr++; //Conta a qtd de caracteres semelhantes(mesma posição no vetor)
            printf("...");
        }
    }
    if(strlen(str2) == contStr)  //Compara se o tamanho da String(str2) tem o mesmo tamanho do contador (contStr)
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
#endif // ex6
