#include <stdio.h>
#include <stdlib.h>
#define ex1

/*Grupo 12:
  Daniel Santana
  Victor Monteiro
*/

#ifdef ex1
struct  numeros{
        char c;
        int i;
        long l;
        float f;
        double d;
        unsigned char uc;
        unsigned int ui;
        unsigned long ul;

};
void recebeDados(char *pc,int *pi,long *pl,float *pf,double *pd,unsigned char *puc,unsigned int *pui,unsigned long *pul);
void printar(char *pc,int *pi,long *pl,float *pf,double *pd,unsigned char *puc,unsigned int *pui,unsigned long *pul);

int main()
{

    struct numeros x;
    int repeat;

    while(1){

        recebeDados(&x.c,&x.i,&x.l,&x.f,&x.d,&x.uc,&x.ui,&x.ul);

        printf("\n\nDeseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
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

void recebeDados(char *pc,int *pi,long *pl,float *pf,double *pd,unsigned char *puc,unsigned int *pui,unsigned long *pul){
    printf("Digite um char:\n");
    scanf("%c",pc);
    fflush(stdin);
    printf("Digite um int:\n");
    scanf("%d",pi);
    fflush(stdin);
    printf("Digite um long:\n");
    scanf("%ld",pl);
    fflush(stdin);
    printf("Digite um float:\n");
    scanf("%f",pf);
    fflush(stdin);
    printf("Digite um double:\n");
    scanf("%lf",pd);
    fflush(stdin);
    printf("Digite um unsigned char:\n");
    scanf("%c",puc);
    fflush(stdin);
    printf("Digite um unsigned int:\n");
    scanf("%u",pui);
    fflush(stdin);
    printf("Digite um unsigned long:\n");
    scanf("%lu",pul);
    fflush(stdin);

    printar(pc,pi,pl,pf,pd,puc,pui,pul);

}


void printar(char *pc,int *pi,long *pl,float *pf,double *pd,unsigned char *puc,unsigned int *pui,unsigned long *pul){

    printf("\n");
    printf("        10        20        30        40        50        60        70\n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %-10c%-10d%-20ld%-20.2f%-10.1lf\n",*pc,*pi,*pl,*pf,*pd);
    printf("          %-20c%-20u%-20lu",*puc,*pui,*pul);


}
#endif


#ifdef ex2
int entradaDados(float *Px,char *Pc,float *Pacumulador,int *Pi);
void adicao(float *Px,float *Pacumulador);
void subtracao(float *Px,float *Pacumulador);
void multiplicacao(float *Px,float *Pacumulador);
void divisao(float *Px,float *Pacumulador);

int main()
{
    float x,acumulador=0;
    char c;
    int i=0,resultado=1,repeat;

    while(1){
        resultado=entradaDados(&x,&c,&acumulador,&i);

        if(resultado==0){

            printf("\n\nDeseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
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

    return 0;
}

int entradaDados(float *Px,char *Pc,float *Pacumulador,int *Pi){
    if(*Pi==0){
        printf("Entre com o primeiro numero para comecar:\n");
        scanf("%f",Px);
        fflush(stdin);
        *Pacumulador+=*Px;

        (*Pi)++;
        return 1;
    }
    else{
        system("cls");
        printf("\nResultado parcial=%.2f",*Pacumulador);
        printf("\n\nEntre com uma das opcoes abaixo(+,-,* ou /):\n");
        printf("\nAdicao(digite +)\nSubtracao(digite -)\nMultiplicacao(digite *)\nDivisao(digite /)\n");
        printf("\n(Digite = para encerrar os calculos e ver o resultado final)\n");
        scanf("%c",Pc);
        fflush(stdin);

        switch(*Pc){

            case '+':
                system("cls");
                printf("Digite um numero para somar:\n%.2f+",*Pacumulador);
                scanf("%f",Px);
                fflush(stdin);
                adicao(Px,Pacumulador);
                break;

            case '-':
                system("cls");
                printf("Digite um numero para subtrair:\n%.2f-",*Pacumulador);
                scanf("%f",Px);
                fflush(stdin);
                subtracao(Px,Pacumulador);
                break;

            case '*':
                system("cls");
                printf("Digite um numero para multiplicar:\n%.2f*",*Pacumulador);
                scanf("%f",Px);
                fflush(stdin);
                multiplicacao(Px,Pacumulador);
                break;

            case '/':
                system("cls");
                do{
                    printf("Digite um numero para dividir:\n%.2f/",*Pacumulador);
                    scanf("%f",Px);
                }while(*Px==0);
                fflush(stdin);
                divisao(Px,Pacumulador);
                break;

            case '=':
                system("cls");
                printf("\nResultado Final= %.2f",*Pacumulador);
                *Pacumulador=0;
                *Pi=0;
                return 0;

            default:
                system("cls");
                printf("Opcao invalida, entre com uma opcao valida.\n");
                break;
        }
        return 1;
    }
}

void adicao(float *Px,float*Pacumulador){
    printf("\n\nNumero digitado= %.2f",*Px);
    *Pacumulador+=*Px;
    printf("\nResultado parcial=%.2f",*Pacumulador);

}

void subtracao(float *Px,float *Pacumulador){
    printf("\n\nNumero digitado= %.2f",*Px);
    *Pacumulador-=*Px;
    printf("\nResultado parcial=%.2f",*Pacumulador);

}

void multiplicacao(float *Px,float *Pacumulador){
    printf("\n\nNumero digitado= %.2f",*Px);
    (*Pacumulador)*=(*Px);
    printf("\nResultado parcial=%.2f",*Pacumulador);

}

void divisao(float *Px,float *Pacumulador){
    printf("\n\nNumero digitado= %.2f",*Px);
    *Pacumulador/=*Px;
    printf("\nResultado parcial=%.2f",*Pacumulador);
}
#endif


#ifdef ex3
int buscaVetor(char *Pvetor,char *Pc);
int main()
{
    while(1){
        int resultado,repeat;
        static char vetor[13]="bdfhjkmoqsuwy";
        char c;

        resultado=buscaVetor(&vetor[0],&c);

        if(resultado==1){
            printf("\nLetra encontrada\n");
        }
        else{
            printf("Letra nao encontrada no vetor\n");
        }


        printf("\n\nDeseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
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

int buscaVetor(char *Pvetor,char *Pc){
    int i;
    printf("Digite uma letra para ser buscada no vetor de char:\n");
    scanf("%c",Pc);
    fflush(stdin);

    for(i=0;i<13;i++){
        if(*Pc==*(Pvetor+i)){
            return 1;
        }
    }
    return 0;

}
#endif


#ifdef ex4
int entradaDados(char *Pstring1,char *Pstring2);
int comparaStrings(char *Pstring1,char *Pstring2);

int main(){
    char string1[11],string2[11];
    int resultado,repeat;

    while(1){
        resultado=entradaDados(&string1[0],&string2[0]);

        switch(resultado){

            case 1:
                printf("As strings sao iguais\n");
                break;
            case 2:
                printf("A primeira string eh maior que a segunda\n");
                break;
            case 3:
                printf("A segunda string eh maior que a primeira\n");
                break;
            case 4:
                printf("As strings tem tamanhos iguais, porem sao diferentes\n");
                break;
        }

        printf("\n\nDeseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
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

int entradaDados(char *Pstring1,char *Pstring2){
    int resultado;

    printf("Digite a primeira string(maximo 10 caracteres):\n");
    gets(Pstring1);
    printf("Digite a segunda string(maximo 10 caracteres):\n");
    gets(Pstring2);

    resultado=comparaStrings(Pstring1,Pstring2);

    return resultado;

}

int comparaStrings(char *Pstring1,char *Pstring2){
    int i,tam1=0,tam2=0;

    for(i=0;*(Pstring1+i)!='\0';i++){
        tam1++;
    }
    for(i=0;*(Pstring2+i)!='\0';i++){
        tam2++;
    }
    if(tam1!=tam2){
        if(tam1>tam2){
            return 2;
        }
        else{
            return 3;
        }

    }

    else{

        for(i=0;i<tam1;i++){
            if(*(Pstring1+i)!=*(Pstring2+i)){
                return 4;
            }
        }
        return 1;
    }


}
#endif


#ifdef ex5
struct dados{

    char nome[11];
    char end[30];
    char cidade[20];
    char estado[20];
    char cep[9];
};
void entradaDados(struct dados *Pstruct);
void imprimeDados(struct dados *Pstruct);

int main()
{
    int menu;
    struct dados vetor[4];

    while(1){
        printf("\n1-Entrada de dados\n2-Mostra os registros\n3-Sair\n");
        printf("\n");
        printf("Escolha uma opcao:\n");
        scanf("%d",&menu);
        fflush(stdin);

        switch (menu){
            case 1:
                system("cls");
                entradaDados(&vetor[0]);
                break;
            case 2:
                system("cls");
                imprimeDados(&vetor[0]);
                break;
            case 3:
                return 0;
            default:
                printf("opcao invalida, digite uma opcao valida");
                break;
        }


    }
}

void entradaDados(struct dados *Pstruct){
    int i;

    for(i=0;i<4;i++){
        printf("Entre com o nome do registro %d\n",i);
        gets((*(Pstruct+i)).nome);
        fflush(stdin);
        printf("Entre com o endereco do registro %d\n",i);
        gets((*(Pstruct+i)).end);
        fflush(stdin);
        printf("Entre com a cidade do registro %d\n",i);
        gets((*(Pstruct+i)).cidade);
        fflush(stdin);
        printf("Entre com o estado do registro %d\n",i);
        gets((*(Pstruct+i)).estado);
        fflush(stdin);
        printf("Entre com o CEP do registro %d\n",i);
        gets((*(Pstruct+i)).cep);
        fflush(stdin);
        system("cls");
    }

    system("cls");

}

void imprimeDados(struct dados *Pstruct){
     int i;

     for(i=0;i<4;i++){
         printf("REGISTRO %d:\nNome: %s\n",i,(*(Pstruct+i)).nome);
         printf("Endereco: %s\n",(*(Pstruct+i)).end);
         printf("Cidade: %s\n",(*(Pstruct+i)).cidade);
         printf("Estado: %s\n",(*(Pstruct+i)).estado);
         printf("CEP: %s\n",(*(Pstruct+i)).cep);
         printf("\n\n");

     }


}
#endif


#ifdef ex6
struct dados{

    char nome[11];
    char end[30];
    char cidade[20];
    char estado[20];
    char cep[9];
};
void entradaDados(struct dados *Pstruct);
void imprimeDados(struct dados *Pstruct);
void procuraDados(struct dados *Pstruct);
void alteraDados(struct dados *Pstruct);
void exclui(struct dados *Pstruct);
int comparaString(char *StringEscolhida, char *NomeStruct);
void deletaString(char *String);
int main()
{
    int menu;
    struct dados vetor[4];

    while(1){
        printf("\n1-Entrada de dados\n2-Mostra os registros\n3-Procura registro pelo nome\n");
        printf("4-Altera dados\n5-Exclui Registro\n6-Sair\n");
        printf("\n");
        printf("Escolha uma opcao:\n");
        scanf("%d",&menu);
        fflush(stdin);

        switch (menu){
            case 1:
                system("cls");
                entradaDados(&vetor[0]);
                break;
            case 2:
                system("cls");
                imprimeDados(&vetor[0]);
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                procuraDados(&vetor[0]);
                system("pause");
                system("cls");
                break;

            case 4:
                system("cls");
                alteraDados(&vetor[0]);
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                exclui(&vetor[0]);
                system("pause");
                system("cls");
                break;
            case 6:
                system("cls");
                printf("Saiu do programa\n");
                return 0;
            default:
                system("cls");
                printf("Opcao invalida, digite uma opcao valida\n\n");
                system("pause");
                system("cls");
                break;
        }


    }
}

void entradaDados(struct dados *Pstruct){
    int i;

    for(i=0;i<4;i++){
        printf("Entre com o nome do registro %d\n",i);
        gets((*(Pstruct+i)).nome);
        fflush(stdin);
        printf("Entre com o endereco do registro %d\n",i);
        gets((*(Pstruct+i)).end);
        fflush(stdin);
        printf("Entre com a cidade do registro %d\n",i);
        gets((*(Pstruct+i)).cidade);
        fflush(stdin);
        printf("Entre com o estado do registro %d\n",i);
        gets((*(Pstruct+i)).estado);
        fflush(stdin);
        printf("Entre com o CEP do registro %d\n",i);
        gets((*(Pstruct+i)).cep);
        fflush(stdin);
        system("cls");
    }

    system("cls");

}

void imprimeDados(struct dados *Pstruct){
     int i;

     for(i=0;i<4;i++){
         printf("REGISTRO %d:\nNome: %s\n",i,(*(Pstruct+i)).nome);
         printf("Endereco: %s\n",(*(Pstruct+i)).end);
         printf("Cidade: %s\n",(*(Pstruct+i)).cidade);
         printf("Estado: %s\n",(*(Pstruct+i)).estado);
         printf("CEP: %s\n",(*(Pstruct+i)).cep);
         printf("\n\n");

     }


}

void procuraDados(struct dados *Pstruct){
    int i,aux=0;
    char nomeEscolhido[11];

    printf("Digite um nome para encontrar um registro:\n");
    gets(nomeEscolhido);
    system("cls");

    for(i=0;i<4;i++){
        if(comparaString(&nomeEscolhido[0],(*(Pstruct+i)).nome)){
            aux++;
            printf("REGISTRO %d:\nNome: %s\n",i,(*(Pstruct+i)).nome);
            printf("Endereco: %s\n",(*(Pstruct+i)).end);
            printf("Cidade: %s\n",(*(Pstruct+i)).cidade);
            printf("Estado: %s\n",(*(Pstruct+i)).estado);
            printf("CEP: %s\n",(*(Pstruct+i)).cep);
            printf("\n\n");
        }
        else if(i==3 && aux==0){
            printf("Nao existe nenhum registro com esse nome\n\n");
        }

    }



}

void alteraDados(struct dados *Pstruct){
    int i,aux=0;
    char nomeEscolhido[11];

    printf("Digite um nome para encontrar um registro:\n");
    gets(nomeEscolhido);
    system("cls");
    for(i=0;i<4;i++){
        if(comparaString(&nomeEscolhido[0],(*(Pstruct+i)).nome)){
            aux++;
            printf("Registro encontrado\n\n");
            printf("REGISTRO %d:\n",i);
            printf("Entre com o novo nome do registro %d\n",i);
            gets((*(Pstruct+i)).nome);
            fflush(stdin);
            printf("Entre com o novo endereco do registro %d\n",i);
            gets((*(Pstruct+i)).end);
            fflush(stdin);
            printf("Entre com a nova cidade do registro %d\n",i);
            gets((*(Pstruct+i)).cidade);
            fflush(stdin);
            printf("Entre com o novo estado do registro %d\n",i);
            gets((*(Pstruct+i)).estado);
            fflush(stdin);
            printf("Entre com o novo CEP do registro %d\n",i);
            gets((*(Pstruct+i)).cep);
            fflush(stdin);
            system("cls");
            printf("\nRegistro alterado com sucesso\n");
        }
        else if(i==3 && aux==0){
                 printf("Nao existe nenhum registro com esse nome\n\n");
             }
    }
}

void exclui(struct dados *Pstruct){
    int i,aux=0;
    char nomeEscolhido[11];

    printf("Digite um nome para encontrar um registro:\n");
    gets(nomeEscolhido);
    system("cls");
    for(i=0;i<4;i++){
        if(comparaString(&nomeEscolhido[0],(*(Pstruct+i)).nome)){
            aux++;
            deletaString((*(Pstruct+i)).nome);
            deletaString((*(Pstruct+i)).end);
            deletaString((*(Pstruct+i)).cidade);
            deletaString((*(Pstruct+i)).estado);
            deletaString((*(Pstruct+i)).cep);
            printf("Registro excluido com sucesso\n");
        }
        else if(i==3 && aux==0){
                 printf("Nao existe nenhum registro com esse nome\n\n");
        }
    }
}

int comparaString(char *StringEscolhida, char *NomeStruct){
    int i=0,tam1=0,tam2=0;

    while((*(StringEscolhida+i))!='\0'){
        i++;
        tam1++;
    }
    i=0;
    while((*(NomeStruct+i))!='\0'){
        i++;
        tam2++;
    }
    if(tam1!=tam2){
        return 0;
    }
    else{
        for(i=0;i<tam1;i++){
            if((*(StringEscolhida+i))!=(*(NomeStruct+i))){
                return 0;
            }
        }
        return 1;

    }

}
void deletaString(char *String){
    int i=0;

    for(;;){

        if(*(String+i)=='\0'){
            break;
        }
        else{
            *(String+i)=' ';
        }
        i++;
    }
}
#endif
