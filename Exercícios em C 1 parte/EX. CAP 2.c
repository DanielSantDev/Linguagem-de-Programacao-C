#include<stdio.h>
#include<stdlib.h>
#define ex1
//OBS.: Faça um loop infinito e defina uma saida em todos os exercícios.
#ifdef ex1
/*1 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.*/
main()
{
    char c, resp;
    double x=50,y=x/2;//maior precisão e espaço com ponto
    for(;;)
    {
        for( ; ; )
        {
            printf("Seu numero eh maior(>), menor(<) ou igual(=) a: %.0lf\t",x);
            scanf(" %c", &c);
            if (c == '>')
            {
                x=x+y; // 50+25=75
                y=y/2; // 25/02=12.5
                if(x>=99.2) //não deixa ultrapassar 99
                {
                    x=x-1;//subtrai -1
                }
                else if(x<=0.2) //ñ vai abaixo de zero
                {
                    x=x+1;//adiciona +1
                }
            }
            else if (c == '<')
            {
                x=x-y; //Recebe 50-25=25
                y=y/2;
                if(x>=99.2)//não vai além 100
                {
                    x=x-1;//subtrai -1
                }
                else if(x<=0.2) //ñ vai até zero
                {
                    x=x+1;//adiciona +1-
                }
            }
            else if(c == '=')
            {
                printf("\O NUMERO QUE VOCEH PENSOU EH = %.0lf\n",x);
                break;
            }
        }
        printf("\nDeseja FAZER novamente (s/n)? ");
        resp=getche();
        if(resp == 'n' || resp == 'N')
        {break;}
        else{
        system("cls");
        x=50;
        y=x/2;
        }
        }
            printf("\n\n*****************FIM DO PROGRAMA.*****************\n");
}
#endif // ex1

#ifdef ex2
/*2 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/
main()
{
    int cont=0;
    char c,resp;
    double x=50,y=x;//maior precisão e espaço com ponto
    for(;;)
    {
    for( ; ; )
    {
        printf("Seu numero eh maior(>), menor(<) ou igual(=) a: %.0lf\t",x);
        scanf(" %c", &c);
        switch(c)
        {
            case '>':
            {
                y=y/2; // 25/02=12.5
                x=x+y; // 50+25=75
                if(x>=99.2) //não deixa ultrapassar 99
                {
                    x=x-1;//subtrai -1
                }
                else if(x<=0.2) //ñ vai abaixo de zero
                {
                    x=x+1;//adiciona +1
                }
                cont++;
            }
            break;
            case '<':
            {
                y=y/2; //25/2=12.5
                x=x-y; //50-25=25
                if(x>=99.2)//não vai além 100
                {
                    x=x-1;//subtrai -1
                }
                else if(x<=0.2) //ñ vai até zero
                {
                    x=x+1;//adiciona +1
                }
                cont++;
            }
            break;
            case '=':
            {
                printf("O NUMERO QUE VOCEH PENSOU EH = %.0lf\n",x);
                printf("FORAM %d TENTATIVAS.\n", cont);
                cont++;
            }
            break;
            default:
                printf("Tente novamente...\n");
        }
    if(c=='=')
    {
        break;
    }
    }
        printf("\nDeseja FAZER novamente (s/n)? ");
        resp=getche();
        if(resp == 'n' || resp == 'N')
        {
            printf("*****************FIM DO PROGRAMA.*****************");
            break;

        }
        else
        {
        system("cls");
        x=50;
        y=x/2;
        }
    }
}
#endif // ex2

#ifdef ex3
/*3 - De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.*/
main()
{
    int hora1,minuto1,segundo1,hora2,minuto2,segundo2,instante1=0,instante2=0,total=0;
    char resp;
    for(;;)
    {
    printf("Digite a hora do primeiro instante: ");
    scanf("%d", &hora1);
    printf("Digite os minutos do primeiro instante: ");
    scanf("%d", &minuto1);
    printf("Digite os segundos do primeiro instante: ");
    scanf("%d", &segundo1);

    instante1=(hora1*3600)+(minuto1*60)+segundo1; //passa tudo para segundos

    printf("Digite a hora do segundo instante: ");
    scanf("%d", &hora2);
    printf("Digite os minutos do segundo instante: ");
    scanf("%d", &minuto2);
    printf("Digite os segundos do segundo instante: ");
    scanf("%d", &segundo2);

    instante2=(hora2*3600)+(minuto2*60)+segundo2; //passa tudo para segundos
    if(instante1>instante2)
    {
        total=(24*3600-instante1)+instante2;
        printf("O intervalo de tempo serah; %d\n",total);
        printf("%d h/ %d min/ %d sec\n",total/3600,(total%3600)/60,total%60);
    }
    total=instante2-instante1;
    printf("%d h/ %d min/ %d sec\n",total/3600,(total%3600)/60,total%60);

    printf("\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N'){
        printf("\n\n*****************FIM DO PROGRAMA.*****************\n");
        break;
    }
    system("cls");
    }
}
#endif // ex3

#ifdef ex4
/*Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.*/
main()
{
    int i,num;
    float total;
    char resp;
    for(;;)
    {
        for(i=0,total=0,num=0; num>=0; i++)
        {
            printf("Digite numero: ");
            scanf("%d", &num);
            if(num==0)
            {
                i--;//Não soma +1 na variável i.
            }
            if(num>0)
            {
                total+=num;//Adiciona e Atribui
            }
        }
        printf("A media dos valores digitados eh: %.2f\n\n", total/(i-1)); //média
    printf("\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N'){
        printf("\n\n*****************FIM DO PROGRAMA.*****************\n");
        break;}
    system("cls");
    }
}
#endif // ex4

#ifdef ex5
/*5 - Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior*/
main()
{
    float n,decimal;
    int x;
    char resp;
    for(;;)
    {
        printf("Digite um numero para arredondar:\n");
        scanf("%f",&n);
        x=n;
        decimal=n-x;// pega apenas a parte decimal do numero
        if(decimal<=0.24)
        {
            n=n-decimal;//arredonda para 0
            printf("numero arredondado: %.2f",n);
        }
        if(decimal>=0.25 && decimal<=0.74)
        {
            n=n-decimal+0.5;//arredonda para 0.5
            printf("numero arredondado: %.2f",n);
        }
        if(decimal>=0.75)
        {
            x=x+1;//arredonda para o numero inteiro
            printf("numero arredondado: %d",x);
        }
    printf("\nDeseja digitar novamente (s/n)? ");
    resp=getche();
    if(resp == 'n' || resp == 'N'){
        printf("\n\n*****************FIM DO PROGRAMA.*****************\n");
        break;}
    system("cls");
    }
}
#endif // ex5
