#include <stdio.h>
#include <stdlib.h>

/*
  PROGRAMA DESAFIO 2
  Grupo 12:
  Daniel Santana
  Victor Monteiro
*/

struct controle{
    char nome[20];
    int QTatual;
    int QTmin;
    long dataVal;

};
//Funçoes
int comparaString(char *StringEscolhida,char *NomeStruct);
void deletaString(char *String);
int comparaDatas(long dataEscolhida,long dataStruct);
void entraProduto( struct controle *Pstruct);
void listaProdutos( struct controle *Pstruct);
void pesquisaNome(struct controle *Pstruct);
void pesquisaPrimLetra(struct controle *Pstruct);
void dataValidade(struct controle *Pstruct);
void listaEstoqueMinimo(struct controle *Pstruct);
void movimentaEstoque(struct controle *Pstruct);
void alteraProduto(struct controle *Pstruct);
void excluiProduto(struct controle *Pstruct);
//***********
int main()
{
    struct controle produto;
    struct controle *Pstruct;
    int menu;

    Pstruct=&produto;

    while(1){
        printf("\n1 - Entra produto\n2 - Lista produtos na tela\n3 - Pesquisa um produto pelo nome\n");
        printf("4 - pesquisar um produto pela 1. letra do nome\n5 - pesquisar data de validade (mes/ano)\n");
        printf("6 - lista os produtos abaixo do estoque minimo\n7 - movimenta quantidade em estoque (entrada e saida)\n");
        printf("8 - altera produto pesquisado pelo nome completo\n9 - exclui produto pesquisado pelo nome completo\n");
        printf("10 - saida pelo usuario\n");

        printf("\nEscolha uma opcao:\n");
        scanf("%d",&menu);
        fflush(stdin);

        switch (menu){
            case 1:
                system("cls");
                entraProduto(Pstruct);
                printf("\nProduto cadastrado\n\n");
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                listaProdutos(Pstruct);
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                pesquisaNome(Pstruct);
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                pesquisaPrimLetra(Pstruct);
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                dataValidade(Pstruct);
                system("pause");
                system("cls");
                break;
            case 6:
                system("cls");
                listaEstoqueMinimo(Pstruct);
                system("pause");
                system("cls");
                break;
            case 7:
                system("cls");
                movimentaEstoque(Pstruct);
                system("pause");
                system("cls");
                break;
            case 8:
                system("cls");
                alteraProduto(Pstruct);
                system("pause");
                system("cls");
                break;
            case 9:
                system("cls");
                excluiProduto(Pstruct);
                system("pause");
                system("cls");
                break;
            case 10:
                system("cls");
                printf("\nSaiu do programa\n");
                exit(0);
            default:
                system("cls");
                printf("Opcao invalida\n");
                system("pause");
                system("cls");
                break;
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

int comparaDatas(long dataEscolhida,long dataStruct){
    int mesEscolhido,mesStruct,anoEscolhido,anoStruct;

    anoEscolhido=dataEscolhida%10000;
    anoStruct=dataStruct%10000;
    if(anoStruct<anoEscolhido){
        return 1;
    }
    else if(anoStruct==anoEscolhido){
             mesEscolhido=(dataEscolhida-anoEscolhido)/10000;
             mesStruct=(dataStruct-anoStruct)/10000;
             if(mesStruct<=mesEscolhido){
                 return 1;
             }
             else{
                 return 0;
             }
         }
    return 0;

}

void entraProduto(struct controle *Pstruct){
    FILE *P;
    P=fopen("ProgDesaf2.txt","a");
    printf("Digite o nome do produto:\n");
    gets(&(*Pstruct).nome[0]);
    fflush(stdin);
    printf("Digite a quantidade atual do produto:\n");
    scanf("%d",&(*Pstruct).QTatual);
    fflush(stdin);
    printf("Digite a quantidade minima do produto:\n");
    scanf("%d",&(*Pstruct).QTmin);
    fflush(stdin);
    printf("Digite a validade do produto(no formato MMAAAA || Exemplo: 122020 = Dezembro 2020):\n");
    scanf("%ld",&(*Pstruct).dataVal);
    fflush(stdin);
    fwrite(Pstruct,sizeof(*Pstruct),1,P);
    fclose(P);
}

void listaProdutos(struct controle *Pstruct){
    int i;
    FILE *P;
    P=fopen("ProgDesaf2.txt","r");
    i=0;
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            i++;
            printf("Produto %d:\nNome: %s\nQ.Atual: %d\n",i,(*Pstruct).nome,(*Pstruct).QTatual);
            printf("Q.Minima: %d\nData de validade: %ld",(*Pstruct).QTmin,(*Pstruct).dataVal);
            printf("\n\n");
        }
        else{
            break;
        }
    }
    fclose(P);

}

void pesquisaNome(struct controle *Pstruct){
    FILE *P;
    char nomePesquisado[20];
    int i=0;

    printf("Digite o nome do produto que voce deseja encontrar:\n");
    gets(nomePesquisado);
    fflush(stdin);
    system("cls");

    P=fopen("ProgDesaf2.txt","r");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(comparaString(&nomePesquisado[0],&(*Pstruct).nome[0])){
                i++;
                printf("PRODUTO ENCONTRADO\n\n");
                printf("Nome: %s\nQ.Atual: %d\n",(*Pstruct).nome,(*Pstruct).QTatual);
                printf("Q.Minima: %d\nData de validade: %ld",(*Pstruct).QTmin,(*Pstruct).dataVal);
                printf("\n\n");

            }


        }
        else{
            if(i==0){
                printf("NAO EXISTE NENHUM PRODUTO COM ESSE NOME\n\n");
            }
            break;
        }
    }
    fclose(P);
}

void pesquisaPrimLetra(struct controle *Pstruct){
    FILE *P;
    char letra;
    int i=0;

    printf("Digite a primeira letra do nome do produto que voce deseja encontrar:\n");
    scanf("%c",&letra);
    fflush(stdin);
    system("cls");

    P=fopen("ProgDesaf2.txt","r");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(letra==(*Pstruct).nome[0]){
                i++;
                printf("PRODUTO ENCONTRADO\n\n");
                printf("Nome: %s\nQ.Atual: %d\n",(*Pstruct).nome,(*Pstruct).QTatual);
                printf("Q.Minima: %d\nData de validade: %ld",(*Pstruct).QTmin,(*Pstruct).dataVal);
                printf("\n\n");

            }


        }
        else{
            if(i==0){
                printf("NAO EXISTE NENHUM PRODUTO COM ESSA LETRA INICIAL\n\n");
            }
            break;
        }
    }
    fclose(P);
}

void dataValidade(struct controle *Pstruct){
    FILE *P;
    int i=0;
    long dataEscolhida;
    printf("Digite a data(no formato MMAAAA || Exemplo: 122020 = Dezembro 2020):\n");
    scanf("%ld",&dataEscolhida);
    fflush(stdin);

    P=fopen("ProgDesaf2.txt","r");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(comparaDatas(dataEscolhida,(*Pstruct).dataVal)){
                i++;
                printf("PRODUTO ABAIXO DA DATA DE VALIDADE\n");
                printf("Nome: %s\n",(*Pstruct).nome);
                printf("Data de validade: %ld",(*Pstruct).dataVal);
                printf("\n\n");
            }

        }

        else{
            if(i==0){
                printf("NENHUM HA NENHUM PRODUTO ABAIXO DA DATA DE VALIDADE\n");
            }
            break;
        }

    }
    fclose(P);


}

void listaEstoqueMinimo(struct controle *Pstruct){
    int i;
    FILE *P;
    P=fopen("ProgDesaf2.txt","r");
    i=0;
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if((*Pstruct).QTatual<(*Pstruct).QTmin){
                i++;
                printf("PRODUTO COM ESTOQUE ABAIXO DO MINIMO\nNome: %s\n",(*Pstruct).nome);
                printf("Q.atual: %d\nQ.minima: %d\n\n",(*Pstruct).QTatual,(*Pstruct).QTmin);
            }
        }
        else{
            if(i==0){
                printf("NAO HA NENHUM PRODUTO ABAIXO DO ESTOQUE MINIMO\n");
            }
            break;
        }
    }
    fclose(P);
}

void movimentaEstoque(struct controle *Pstruct){
    FILE *P;
    char nomePesquisado[20];
    int i=0;

    printf("Digite o nome do produto cuja quantidade em estoque sera alterada:\n");
    gets(nomePesquisado);
    fflush(stdin);
    system("cls");

    P=fopen("ProgDesaf2.txt","r+");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(comparaString(&nomePesquisado[0],&(*Pstruct).nome[0])){
                i++;
                printf("PRODUTO ENCONTRADO\n\n");
                printf("Nome: %s\nQ.Atual: %d\n",(*Pstruct).nome,(*Pstruct).QTatual);
                printf("Q.Minima: %d\n",(*Pstruct).QTmin);
                printf("\n\n");
                int escolha,num;
                do{
                    printf("ESCOLHA UMA OPCAO:\n1-Entrada de produtos\n2-Saida de produtos\n\n");
                    scanf("%d",&escolha);
                    fflush(stdin);
                    system("cls");
                    switch (escolha){
                        case 1:
                            printf("Digite a quantidade que sera adicionada ao estoque:\n");
                            scanf("%d",&num);
                            fflush(stdin);
                            (*Pstruct).QTatual+=num;
                            fseek(P,-12,SEEK_CUR);
                            fwrite(&(*Pstruct).QTatual,sizeof((*Pstruct).QTatual),1,P);
                            fseek(P,8,SEEK_CUR);
                            system("cls");
                            printf("A quantidade em estoque foi atualizada\n");
                            break;
                        case 2:
                            printf("Digite a quantidade que sera removida do estoque:\n");
                            scanf("%d",&num);
                            fflush(stdin);
                            (*Pstruct).QTatual-=num;
                            fseek(P,-12,SEEK_CUR);
                            fwrite(&(*Pstruct).QTatual,sizeof((*Pstruct).QTatual),1,P);
                            fseek(P,8,SEEK_CUR);
                            system("cls");
                            printf("A quantidade em estoque foi atualizada\n");
                            break;
                        default:
                            printf("Opcao invalida\n\n");
                            break;
                    }
                }while(escolha!=1 && escolha!=2);
            }


        }
        else{
            if(i==0){
                printf("NAO EXISTE NENHUM PRODUTO COM ESSE NOME\n\n");
            }
            break;
        }
    }
    fclose(P);
}

void alteraProduto(struct controle *Pstruct){
    FILE *P;
    char nomePesquisado[20];
    int i=0;

    printf("Digite o nome do produto que voce deseja encontrar:\n");
    gets(nomePesquisado);
    fflush(stdin);
    system("cls");

    P=fopen("ProgDesaf2.txt","r+");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(comparaString(&nomePesquisado[0],&(*Pstruct).nome[0])){
                i++;
                fseek(P,-32,SEEK_CUR);
                printf("Digite o novo nome do produto:\n");
                gets(&(*Pstruct).nome[0]);
                fflush(stdin);
                printf("Digite a quantidade atual do produto:\n");
                scanf("%d",&(*Pstruct).QTatual);
                fflush(stdin);
                printf("Digite a quantidade minima do produto:\n");
                scanf("%d",&(*Pstruct).QTmin);
                fflush(stdin);
                printf("Digite a validade do produto:\n");
                scanf("%ld",&(*Pstruct).dataVal);
                fflush(stdin);
                fwrite(Pstruct,sizeof(*Pstruct),1,P);
                fclose(P);
                system("cls");
                printf("PRODUTO ALTERADO COM SUCESSO\n");
            }


        }
        else{
            if(i==0){
                printf("NAO EXISTE NENHUM PRODUTO COM ESSE NOME\n\n");
            }
            break;
        }
    }
    fclose(P);
}

void excluiProduto(struct controle *Pstruct){
    FILE *P;
    char nomePesquisado[20];
    int i=0;

    printf("Digite o nome do produto que voce deseja deletar:\n");
    gets(nomePesquisado);
    fflush(stdin);
    system("cls");

    P=fopen("ProgDesaf2.txt","r+");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(comparaString(&nomePesquisado[0],&(*Pstruct).nome[0])){
                i++;
                fseek(P,-32,SEEK_CUR);
                printf("PRODUTO ENCONTRADO\n\n");
                deletaString(&(*Pstruct).nome[0]);
                (*Pstruct).QTatual=0;
                (*Pstruct).QTmin=0;
                (*Pstruct).dataVal=9999999;
                fwrite(Pstruct,sizeof(*Pstruct),1,P);
                printf("PRODUTO DELETADO\n");
                fclose(P);
            }
        }
        else{
            if(i==0){
                printf("NAO EXISTE NENHUM PRODUTO COM ESSE NOME\n\n");
            }
            break;
        }
    }
    fclose(P);


}






