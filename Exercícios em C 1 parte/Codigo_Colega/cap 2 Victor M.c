#include <stdio.h>
#include <stdlib.h>
#define ex2

#ifdef ex1
// VICTOR MONTEIRO ARNONI

int main()
{
    char c;
    float x=50,y=x/2;
    for(;;)
    {
        printf("Seu numero eh o %.0f?\n(maior(>), menor(<), igual(=))\n",x);
        c=getchar();
        getchar();
        if (c=='>')
        {
            x=x+y; // 50+25=75
            y=y/2; // 25/2=12.5
        }
        else if (c=='<')
        {
            x=x-y; //Recebe 50-25=25
            y=y/2;
        }
        else if(c=='=')
        {
            printf("Numero encontrado= %.0f\n",x);
            break;
        }
    }
    return 0;
}


#endif // ex1

#ifdef ex2
main()
{
    double A=50,B=A/2,C=0;
    char opc;

        printf("PENSE EM UM NUMERO ENTRE 1 E 99!!\n");
        printf("DIGITE > PARA MAIOR\nDIGITE < PARA MENOR\nDIGITE = PARA IGUAL\n");
        printf("\n");
    do{
        printf("O SEU NUMERO: >, = OU < A %.0lf\n",A);
        opc = getche();
        printf("\n");
        switch(opc)
        {
        case '>':
            {
            A = A+B;
            B = B/2;
                if(A>=99.5) /*NAO DEIXA A CHEGAR EM 100*/
                {
                    A = A-1;
                }
                    else if(A<=0.5) /*NAO DEIXA A CHEGAR EM 0*/
                    {
                        A = A+1;
                    }

                if(C<=6) /*O PROGRAMA SEMPRE ACERTARA EM ATE 7 TENTATIVAS*/
                {
                    C++;
                }
            }
            break;
        case '<':
            {
            A = A-B;
            B = B/2;
                if(A>=99.5)
                {
                    A = A-1;
                }
                    else if(A<=0.5)
                    {
                        A = A+1;
                    }
                if(C<=6)
                {
                    C++;
                }
            }
            break;
        case '=':
        {
            if(C<=6)
            {
                C++;
            }
            printf("O SEU NUMERO = %.0lf\nACERTEI O SEU NUMERO EM %.0lf TENTATIVAS",A,C);
        }
            break;
        default:
            printf("OPCAO INVALIDA!!\n");
        }
    }while(opc!='=');
}
#endif // ex2

#ifdef ex3
int main(){
    int hora,min,seg,instante1,instante2,intervalo;

    printf("entre com o numero de horas do primeiro instante:\n");
    scanf("%d",&hora);
    printf("entre com o numero de minutos do primeiro instante:\n");
    scanf("%d",&min);
    printf("entre com o numero de horas do primeiro instante:\n");
    scanf("%d",&seg);

    instante1=seg+min*60+hora*3600;

    printf("entre com o numero de horas do segundo instante:\n");
    scanf("%d",&hora);
    printf("entre com o numero de minutos do segundo instante:\n");
    scanf("%d",&min);
    printf("entre com o numero de horas do segundo instante:\n");
    scanf("%d",&seg);

    instante2=seg+min*60+hora*3600;
    if(instante1>instante2){
        intervalo=(24*3600-instante1)+instante2;
        printf("%dh %dmin %dseg",intervalo/3600,(intervalo%3600)/60,intervalo%60);
        return 0;
    }
    intervalo=instante2-instante1;

    printf("%dh %dmin %dseg",intervalo/3600,(intervalo%3600)/60,intervalo%60);
    return 0;
}
#endif // ex3

#ifdef ex4
int main(){
    int n,i=0;
    float media=0;
    while(1){
        printf("Digite numeros inteiros positivos:\n");
        printf("(digite um negativo para calcular a media dos positivos)\n");
        scanf("%d",&n);
        i++;
        if(n<0){
            if(i!=1){
                i--;
            }
            media/=i;
            printf("Media dos positivos: %.2f\n",media);
            return 0;
        }
        media+=n;
    }

    return 0;
}
#endif // ex4

#ifdef ex5
int main(){
    float n,partedecimal;
    int x;
    printf("Digite um numero para arredondar:\n");
    scanf("%f",&n);
    x=n;
    partedecimal=n-x;
    if(partedecimal<0.25){
        n-=partedecimal;
        printf("numero arredondado: %.2f",n);
        return 0;
    }
    if(partedecimal>0.24 && partedecimal<0.75){
        n=n-partedecimal+0.5;
        printf("numero arredondado: %.2f",n);
        return 0;
    }
    if(partedecimal>0.74){
        x=x+1;
        printf("numero arredondado: %d",x);
    }
    return 0;
}
#endif // ex5
