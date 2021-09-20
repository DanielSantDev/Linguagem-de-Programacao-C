#include <stdio.h>
#include <stdlib.h>
#define ex1

/*Grupo 12:
  Daniel Santana
  Victor Monteiro
*/

#ifdef ex1
int main()
{
    int repeat;

    char c;
    char *pc;
    pc=&c;

    int i;
    int *pi;
    pi=&i;

    long l;
    long *pl;
    pl=&l;

    unsigned int ui;
    unsigned int *pui;
    pui=&ui;

    float f;
    float *pf;
    pf=&f;

    double d;
    double *pd;
    pd=&d;

    unsigned long ul;
    unsigned long *pul;
    pul=&ul;

    unsigned char uc;
    unsigned char *puc;
    puc=&uc;

    while(1){
        printf("Digite um char:\n");
        scanf("%c",pc);
        fflush(stdin);
        printf("Digite um int:\n");
        scanf("%d",pi);
        fflush(stdin);
        printf("Digite um long:\n");
        scanf("%ld",pl);
        fflush(stdin);
        printf("Digite um unsigned int:\n");
        scanf("%u",pui);
        fflush(stdin);
        printf("Digite um float:\n");
        scanf("%f",pf);
        fflush(stdin);
        printf("Digite um double:\n");
        scanf("%lf",pd);
        fflush(stdin);
        printf("Digite um unsigned long:\n");
        scanf("%lu",pul);
        fflush(stdin);
        printf("Digite um unsigned char:\n");
        scanf("%c",puc);
        fflush(stdin);

        printf("        10        20        30        40        50        60\n");
        printf("123456789012345678901234567890123456789012345678901234567890\n");
        printf("    %-20d%-20ld%-16u\n",*pi,*pl,*pui);
        printf("              %-20.2f%-20.2lf%-6c\n",*pf,*pd,*pc);
        printf("         %-20lu%-31c\n\n",*pul,*puc);


        printf("Deseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
        scanf("%d",&repeat);
        fflush(stdin);

        if(repeat>=0){
            system("cls");
            continue;
        }
        else{
            return 0;
        }
    }

}
#endif

#ifdef ex2
struct infos{
    char nome[15];
    char end[30];
    char cidade[30];
    char estado[3];
    char cep[9];

};
int main(){
    int repeat;
    struct infos x,*px;

    px=&x;

    while(1){
        printf("Digite o nome:\n");
        scanf("%s",&(*px).nome[0]);
        printf("Digite o endereco:\n");
        scanf("%s",&(*px).end[0]);
        printf("Digite a cidade:\n");
        scanf("%s",&(*px).cidade[0]);
        printf("Digite o estado:\n");
        scanf("%s",&(*px).estado[0]);
        printf("Digite o CEP:\n");
        scanf("%s",&(*px).cep[0]);

        printf("\nNome: %s\nEndereco: %s\nCidade: %s\n",(*px).nome,(*px).end,(*px).cidade);
        printf("Estado: %s\nCEP: %s\n\n",(*px).estado,(*px).cep);


        printf("Deseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
        scanf("%d",&repeat);
        fflush(stdin);

        if(repeat>=0){
            system("cls");
            continue;
        }
        else{
            return 0;
        }
    }


    return 0;
}
#endif // ex2

#ifdef ex3
int main(){

    int repeat,i,aux;
    char c,*pc;
    static char vetor[13]="bdfhjlmoqsuwy";
    char *pvetor;

    pvetor=&vetor[0];
    pc=&c;

    while(1){
        aux=0;
        printf("Digite um caracter para ser buscado no vetor:\n");
        scanf("%c",pc);
        fflush(stdin);

        for(i=0;i<13;i++){
            if(*(pvetor+i)==*pc){
                printf("Caractere encontrado na posicao %d do vetor\n",i);
                aux=1;
                break;
            }
        }
        if(aux==0){
            printf("Caractere nao encontrado no vetor\n");
        }



        printf("Deseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
        scanf("%d",&repeat);
        fflush(stdin);

        if(repeat>=0){
            system("cls");
            continue;
        }
        else{
            return 0;
        }

    }


    return 0;
}
#endif // ex3

#ifdef ex4
int repetirPrograma();
int main(){

    int repeat,i,tam1,tam2;
    char string1[11],string2[11];
    char *Pstring1,*Pstring2;

    Pstring1=&string1[0];
    Pstring2=&string2[0];

    while(1){
        i=0;
        tam1=0;
        tam2=0;
        printf("Digite a string 1:\n");
        gets(Pstring1);
        printf("Digite a string 2:\n");
        gets(Pstring2);

        while(*(Pstring1+i)!='\0'){
            tam1++;
            i++;
        }
        i=0;
        while(*(Pstring2+i)!='\0'){
            tam2++;
            i++;
        }

        if(tam1!=tam2){
            printf("As strings sao diferentes por tamanho.\n");
            repeat=repetirPrograma();
            if(repeat==1){
                continue;
            }
            else{
                return 0;
            }
        }
        else{
            for(i=0;i<tam1;i++){
                if(*(Pstring1+i)!=*(Pstring2+i)){
                    printf("As strings sao diferentes.\n");
                    break;
                }
                if(*(Pstring1+i)==*(Pstring2+i) && i==(tam1-1)){
                    printf("As strings sao iguais");
                }
            }
         repeat=repetirPrograma();
            if(repeat==1){
                continue;
            }
            else{
                return 0;
            }
        }

    }

}


int repetirPrograma(){
    int repeat;
    printf("\nDeseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
    scanf("%d",&repeat);
    fflush(stdin);

    if(repeat>=0){
        system("cls");
        return 1;
    }
    else{
        return 0;
    }

}

#endif


#ifdef ex5

int main(){
    int repeat;
    float x,*Px,acumulador=2,*Pacumulador;
    int contador,*Pcontador;

    while(1){
        contador=0;
        acumulador=0;
        Pacumulador=&acumulador;
        Px=&x;
        Pcontador=&contador;
        while(1){
            printf("Digite um numero inteiro e positivo (digite um negativo para calcular a media):\n");
            scanf("%f",Px);
            if(*Px<0){
                break;
            }
            *Pacumulador+=*Px;
            (*Pcontador)++;
        }
        if(contador>0){
        *Pacumulador/=*Pcontador;
        }
        else{
            *Pacumulador=0;
        }

        printf("Media dos valores digitados= %.2f",*Pacumulador);

        printf("\nDeseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
        scanf("%d",&repeat);
        fflush(stdin);

        if(repeat>=0){
            system("cls");
            continue;
        }
        else{
            return 0;
        }
    }

}
#endif


#ifdef ex6

struct data{
    int dia;
    int mes;
    int ano;

};

int vetorAnoNormal[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int vetorBissexto[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int bissexto(int ano);
int main(){
    int repeat,i,acumulador,acumulador2;
    int *Pacumulador,*Pacumulador2;
    struct data dias[2];
    struct data *Pdata[2];

    Pacumulador=&acumulador;
    Pacumulador2=&acumulador2;
    Pdata[0]=&dias[0];
    Pdata[1]=&dias[1];

    while(1){
        acumulador=0;
        acumulador2=0;
        printf("CALCULO DA QUANTIDADE DE DIAS ENTRE DUAS DATAS\n");
        printf("(Digite primeiro a data mais antiga, depois digite a mais recente)\n\n");
        do{
            printf("Digite o dia da primeira data:\n");
            scanf("%d",&(*Pdata[0]).dia);}while((*Pdata[0]).dia>31 || (*Pdata[0]).dia<1);
        do{
            printf("Digite o mes da primeira data:\n");
            scanf("%d",&(*Pdata[0]).mes);}while((*Pdata[0]).mes>12 || (*Pdata[0]).mes<1);
        do{
            printf("Digite o ano da primeira data:\n");
            scanf("%d",&(*Pdata[0]).ano);}while((*Pdata[0]).ano<0);
        do{
            printf("Digite o dia da segunda data:\n");
            scanf("%d",&(*Pdata[1]).dia);}while((*Pdata[1]).dia>31 || (*Pdata[1]).dia<1);
        do{
            printf("Digite o mes da segunda data:\n");
            scanf("%d",&(*Pdata[1]).mes);}while((*Pdata[1]).mes>12 || (*Pdata[1]).mes<1);
        do{
            printf("Digite o ano da segunda data:\n");
            scanf("%d",&(*Pdata[1]).ano);}while((*Pdata[0]).ano>(*Pdata[1]).ano);

        // Parte do programa para calcular diferença de dias entre duas datas do MESMO ANO
        if((*Pdata[0]).ano==(*Pdata[1]).ano){
            if(bissexto((*Pdata[0]).ano)==1){
                for(i=0;i<(*Pdata[0]).mes-1;i++){
                    *Pacumulador+=vetorBissexto[i];
                }
            }
            else{
                for(i=0;i<(*Pdata[0]).mes-1;i++){
                    *Pacumulador+=vetorAnoNormal[i];
                }
            }
            *Pacumulador+=(*Pdata[0]).dia;


            if(bissexto((*Pdata[1]).ano)==1){
                for(i=0;i<(*Pdata[1]).mes-1;i++){
                    *Pacumulador2+=vetorBissexto[i];
                }
            }
            else{
                for(i=0;i<(*Pdata[1]).mes-1;i++){
                    *Pacumulador2+=vetorAnoNormal[i];
                }
            }
            *Pacumulador2+=(*Pdata[1]).dia;

            if(*Pacumulador>*Pacumulador2){
                *Pacumulador-=*Pacumulador2;
                printf("Numero de dias= %d",*Pacumulador);
            }
            else{
                *Pacumulador2-=*Pacumulador;
                printf("Numero de dias= %d",*Pacumulador2);
            }

            printf("\nDeseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
            scanf("%d",&repeat);
            fflush(stdin);

            if(repeat>=0){
                system("cls");
                continue;
            }
            else{
                return 0;
            }

        }
        //********************************************************************************************

        //Parte do programa que calcula quando os anos das datas são diferentes
        for(i=(*Pdata[0]).ano+1;i<(*Pdata[1]).ano;i++){
            if(bissexto(i)==1){
                *Pacumulador+=366;
            }
            else{
                *Pacumulador+=365;
            }
        }

        for(i=0;i<(*Pdata[1]).mes-1;i++){
            if(bissexto((*Pdata[1]).ano)==1){
                *Pacumulador+=vetorBissexto[i];
            }
            else{
                *Pacumulador+=vetorAnoNormal[i];
            }
        }
        *Pacumulador+=(*Pdata[1]).dia;

        for(i=(*Pdata[0]).mes;i<12;i++){
            if(bissexto((*Pdata[0]).ano)==1){
                *Pacumulador+=vetorBissexto[i];
            }
            else{
                *Pacumulador+=vetorAnoNormal[i];
            }
        }
        if(bissexto((*Pdata[0]).ano)==1){
                *Pacumulador+=vetorBissexto[(*Pdata[0]).mes-1]-(*Pdata[0]).dia;
            }
            else{
                *Pacumulador+=vetorAnoNormal[(*Pdata[0]).mes-1]-(*Pdata[0]).dia;
            }
        printf("Numero de dias entre as datas: %d",*Pacumulador);

        printf("\nDeseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
        scanf("%d",&repeat);
        fflush(stdin);

        if(repeat>=0){
            system("cls");
            continue;
        }
        else{
            return 0;
        }
    }
}


int bissexto(int ano){

    if(ano%400==0){
        return 1;
    }
    if(ano%100!=0 && ano%4==0){
        return 1;
    }

    return 0;
}
#endif
