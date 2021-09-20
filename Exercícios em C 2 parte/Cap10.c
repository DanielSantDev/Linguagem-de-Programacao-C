#include <stdio.h>
#include <stdlib.h>
#define ex1

/*Grupo 12:
  Daniel Santana
  Victor Monteiro
*/

#ifdef ex1
void entradaDados();
void listaDados();
int main()
{
    int menu;

    while(1){
        printf("\n1-Entrada de dados\n2-Imprimir na tela\n3-Sair");
        printf("\n\n");
        printf("Digite uma opcao:\n");
        scanf("%d",&menu);
        fflush(stdin);

        switch (menu){
            case 1:
                system("cls");
                entradaDados();
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                listaDados();
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                printf("Saiu do programa\n");
                exit(0);
            default:
                printf("OPCAO INVALIDA\n");
                break;
        }
    }
    return 0;
}

void entradaDados(){
    FILE *P;
    char c='a';

    P=fopen("arq.txt","a");

    while(1){
        printf("Digite um caractere(Um por vez. Digite 0 para parar a entrada de dados):\n");
        scanf("%c",&c);
        if(c=='0'){
            printf("\nEntrada de dados terminada\n");
            break;
        }
        fflush(stdin);
        fwrite(&c,sizeof(c),1,P);

    }
    fclose(P);
}


void listaDados(){
    FILE *P;
    char c='a';

    P=fopen("arq.txt","r");

    for(;;){
        if(fread(&c,sizeof(c),1,P)){
            printf("%c",c);


        }

        else{
            printf("\n\n");
            break;
        }

    }
    fclose(P);
}
#endif // ex1

#ifdef ex2
struct contato{
    char nome[20];
    char telefone[10];
    int aniver;
};


int main(){
    struct contato X;
    struct contato *Pstruct;
    int menu;

    while(1){
        printf("\n1-Inserir contato\n2-Altera contato\n3-Exclui contato");
        printf("\n4-Pesquisa contato pelo nome\n5-Listar todos os contatos");
        printf("\n6-Listar contatos cujo nome inicia com uma determinada letra\n7-Aniversariantes do mes\n8-Sair\n");
        printf("\n\n");
        printf("Digite uma opcao:\n");
        scanf("%d",&menu);
        fflush(stdin);

        switch (menu){
            case 1:
                system("cls");

                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");

                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");

                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");

                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");

                system("pause");
                system("cls");
                break;
            case 6:
                system("cls");

                system("pause");
                system("cls");
                break;
            case 7:
                system("cls");

                system("pause");
                system("cls");
                break;
            case 8:
                system("cls");
                printf("Saiu do programa\n");
                exit(0);
            default:
                printf("OPCAO INVALIDA\n");
                break;
        }
    }
}
#endif // ex2

#ifdef ex3
struct controle{
    int codigo;
    char descricao[30];
    int QTatual;
};

void deletaString(char *String);
int comparaString(char *StringEscolhida, char *NomeStruct);
void entradaDados(struct controle *Pstruct);
void alteraDados(struct controle *Pstruct);
void ExcluiProdutos(struct controle *Pstruct);
void PesquisaDescricao(struct controle *Pstruct);
void listar(struct controle *Pstruct);
void listarNaoDisp(struct controle *Pstruct);
void alterarQuantidade(struct controle *Pstruct);
int main()
{
    struct controle produtos;
    struct controle *Pstruct;
    int menu;

    Pstruct=&produtos;

    while(1){
        printf("\n1-Inclui produtos\n2-Altera produtos\n3-Exclui produtos");
        printf("\n4-Pesquisa produto pela descricao\n5-Listar todos os produtos");
        printf("\n6-Listar produtos nao disponiveis\n7-Alterar a quantidade atual\n8-Sair\n");
        printf("\n\n");
        printf("Digite uma opcao:\n");
        scanf("%d",&menu);
        fflush(stdin);

        switch (menu){
            case 1:
                system("cls");
                entradaDados(Pstruct);
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                alteraDados(Pstruct);
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                ExcluiProdutos(Pstruct);
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                PesquisaDescricao(Pstruct);
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                listar(Pstruct);
                system("pause");
                system("cls");
                break;
            case 6:
                system("cls");
                listarNaoDisp(Pstruct);
                system("pause");
                system("cls");
                break;
            case 7:
                system("cls");
                alterarQuantidade(Pstruct);
                system("pause");
                system("cls");
                break;
            case 8:
                system("cls");
                printf("Saiu do programa\n");
                exit(0);
            default:
                printf("OPCAO INVALIDA\n");
                break;
        }
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

void entradaDados(struct controle *Pstruct){
    FILE *P;
    P=fopen("Ex3.txt","a");
    printf("Digite o codigo do produto:\n");
    scanf("%d",&(*Pstruct).codigo);
    fflush(stdin);
    printf("Digite a descricao do produto:\n");
    gets(&(*Pstruct).descricao[0]);
    fflush(stdin);
    printf("Digite a quantidade atual do produto:\n");
    scanf("%d",&(*Pstruct).QTatual);
    fflush(stdin);
    fwrite(Pstruct,sizeof(*Pstruct),1,P);
    fclose(P);
}


void alteraDados(struct controle *Pstruct){
    FILE *P;
    int codigoPesquisado;
    int i=0;

    printf("Digite o codigo do produto que voce deseja alterar:\n");
    scanf("%d",&codigoPesquisado);
    fflush(stdin);
    system("cls");

    P=fopen("Ex3.txt","r+");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(codigoPesquisado==(*Pstruct).codigo){
                i++;
                fseek(P,-40,SEEK_CUR);
                printf("Digite o codigo do novo produto:\n");
                scanf("%d",&(*Pstruct).codigo);
                fflush(stdin);
                printf("Digite a descricao do novo produto:\n");
                gets(&(*Pstruct).descricao[0]);
                fflush(stdin);
                printf("Digite a quantidade atual do novo produto:\n");
                scanf("%d",&(*Pstruct).QTatual);
                fflush(stdin);
                fwrite(Pstruct,sizeof(*Pstruct),1,P);
                fclose(P);
                system("cls");
                printf("PRODUTO ALTERADO COM SUCESSO\n");
            }


        }
        else{
            if(i==0){
                printf("NAO EXISTE NENHUM PRODUTO COM ESSE CODIGO\n\n");
            }
            break;
        }
    }
    fclose(P);

}

void ExcluiProdutos(struct controle *Pstruct){
    FILE *P;
    int codigoPesquisado;
    int i=0;

    printf("Digite o codigo do produto que voce deseja deletar:\n");
    scanf("%d",&codigoPesquisado);
    fflush(stdin);
    system("cls");

    P=fopen("Ex3.txt","r+");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(codigoPesquisado==(*Pstruct).codigo){
                i++;
                fseek(P,-40,SEEK_CUR);
                printf("PRODUTO ENCONTRADO\n\n");
                deletaString(&(*Pstruct).descricao[0]);
                (*Pstruct).codigo=0;
                (*Pstruct).QTatual=-1;
                fwrite(Pstruct,sizeof(*Pstruct),1,P);
                printf("PRODUTO DELETADO\n");
                fclose(P);
            }
        }
        else{
            if(i==0){
                printf("NAO EXISTE NENHUM PRODUTO COM ESSE CODIGO\n\n");
            }
            break;
        }
    }
    fclose(P);
}

void PesquisaDescricao(struct controle *Pstruct){
    FILE *P;
    char descricaoPesquisada[30];
    int i=0;

    printf("Digite a descricao do produto que voce deseja encontrar:\n");
    gets(descricaoPesquisada);
    fflush(stdin);
    system("cls");

    P=fopen("Ex3.txt","r");

    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(comparaString(&descricaoPesquisada[0],&(*Pstruct).descricao[0])){
                i++;
                printf("PRODUTO ENCONTRADO\n");
                printf("Codigo: %d\nDescricao: %s\nQuantidade atual: %d",(*Pstruct).codigo,(*Pstruct).descricao,(*Pstruct).QTatual);
                printf("\n\n");
            }
        }
        else{
            if(i==0){
                printf("NAO HA NENHUM PRODUTO COM ESSA DESCRICAO\n");
            }
            printf("\n\n");
            break;
        }
    }
    fclose(P);

}

void listar(struct controle *Pstruct){
    FILE *P;
    P=fopen("Ex3.txt","r");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            printf("Codigo: %d\nDescricao: %s\nQuantidade atual: %d",(*Pstruct).codigo,(*Pstruct).descricao,(*Pstruct).QTatual);
            printf("\n\n");
        }
        else{
            printf("\n\n");
            break;
        }
    }
    fclose(P);

}

void listarNaoDisp(struct controle *Pstruct){
    FILE *P;
    int i=0;

    P=fopen("Ex3.txt","r");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if((*Pstruct).QTatual==0){
                i++;
                printf("PRODUTO INDISPONIVEL\n");
                printf("Codigo: %d\nDescricao: %s\nQuantidade atual: %d",(*Pstruct).codigo,(*Pstruct).descricao,(*Pstruct).QTatual);
                printf("\n\n");
            }
        }
        else{
            if(i==0){
                printf("TODOS OS PRODUTOS ESTAO DISPONIVEIS\n");
            }
            printf("\n\n");
            break;
        }
    }
    fclose(P);
}

void alterarQuantidade(struct controle *Pstruct){
    FILE *P;
    int codigoPesquisado;
    int i=0;

    printf("Digite o codigo do produto cuja quantidade em estoque sera alterada:\n");
    scanf("%d",&codigoPesquisado);
    fflush(stdin);
    system("cls");

    P=fopen("Ex3.txt","r+");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
             if(codigoPesquisado==(*Pstruct).codigo){
                i++;
                printf("PRODUTO ENCONTRADO\n\n");
                printf("Codigo: %d\nDescricao: %s\n",(*Pstruct).codigo,(*Pstruct).descricao);
                printf("Q.Atual: %d\n",(*Pstruct).QTatual);
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
                            fseek(P,-4,SEEK_CUR);
                            fwrite(&(*Pstruct).QTatual,sizeof((*Pstruct).QTatual),1,P);
                            system("cls");
                            printf("A quantidade em estoque foi atualizada\n");
                            fclose(P);
                            break;
                        case 2:
                            printf("Digite a quantidade que sera removida do estoque:\n");
                            scanf("%d",&num);
                            fflush(stdin);
                            (*Pstruct).QTatual-=num;
                            fseek(P,-4,SEEK_CUR);
                            fwrite(&(*Pstruct).QTatual,sizeof((*Pstruct).QTatual),1,P);
                            system("cls");
                            printf("A quantidade em estoque foi atualizada\n");
                            fclose(P);
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
#endif // ex1

#ifdef ex4
struct cadastro{
    char nome[20];
    char end[30];
    char cidade[20];
    char estado[20];
    char cep[10];
};
int comparaString(char *StringEscolhida, char *NomeStruct);
void deletaString(char *String);
void entradaDados(struct cadastro *Pstruct);
void listaDados(struct cadastro *Pstruct);
void procura(struct cadastro *Pstruct);
void altera(struct cadastro *Pstruct);
void exclui(struct cadastro *Pstruct);

int main(){
    struct cadastro X;
    struct cadastro *Pstruct;
    int menu;

    Pstruct=&X;

    while(1){
        printf("\n1-Inserir um registro\n2-Lista registros\n3-Procura registro pelo nome");
        printf("\n4-Altera registro\n5-Exclui Registro");
        printf("\n6-Sair\n");
        printf("\n\n");
        printf("Digite uma opcao:\n");
        scanf("%d",&menu);
        fflush(stdin);

        switch (menu){
            case 1:
                system("cls");
                entradaDados(Pstruct);
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                listaDados(Pstruct);
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                procura(Pstruct);
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                altera(Pstruct);
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                exclui(Pstruct);
                system("pause");
                system("cls");
                break;
            case 6:
                system("cls");
                printf("Saiu do programa\n");
                exit(0);
            default:
                printf("OPCAO INVALIDA\n");
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

void entradaDados(struct cadastro *Pstruct){
    FILE *P;
    P=fopen("Registros.txt","a");
    printf("Digite o nome:\n");
    gets(&(*Pstruct).nome[0]);
    fflush(stdin);
    printf("Digite o endereco:\n");
    gets(&(*Pstruct).end[0]);
    fflush(stdin);
    printf("Digite a cidade:\n");
    gets(&(*Pstruct).cidade[0]);
    fflush(stdin);
    printf("Digite o estado:\n");
    gets(&(*Pstruct).estado[0]);
    fflush(stdin);
    printf("Digite o CEP:\n");
    gets(&(*Pstruct).cep[0]);
    fflush(stdin);
    fwrite(Pstruct,sizeof(*Pstruct),1,P);
    fclose(P);
}

void listaDados(struct cadastro *Pstruct){
    FILE *P;
    P=fopen("Registros.txt","r");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            printf("Nome: %s\nEndereco: %s\nCidade: %s\n",(*Pstruct).nome,(*Pstruct).end,(*Pstruct).cidade);
            printf("Estado: %s\nCEP: %s\n",(*Pstruct).estado,(*Pstruct).cep);
            printf("\n\n");
        }
        else{
            printf("\n\n");
            break;
        }
    }
    fclose(P);
}

void procura(struct cadastro *Pstruct){
    FILE *P;
    char nomePesquisado[20];
    int i=0;

    printf("Digite o nome do registro que voce quer encontrar:\n");
    gets(nomePesquisado);
    fflush(stdin);
    system("cls");

    P=fopen("Registros.txt","r");

    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(comparaString(&nomePesquisado[0],&(*Pstruct).nome[0])){
                i++;
                printf("Nome: %s\nEndereco: %s\nCidade: %s\n",(*Pstruct).nome,(*Pstruct).end,(*Pstruct).cidade);
                printf("Estado: %s\nCEP: %s\n",(*Pstruct).estado,(*Pstruct).cep);
                printf("\n\n");
            }
        }
        else{
            if(i==0){
                printf("NAO HA NENHUM REGISTRO COM ESSE NOME\n");
            }
            printf("\n\n");
            break;
        }
    }
    fclose(P);
}

void altera(struct cadastro *Pstruct){
    FILE *P;
    char nomePesquisado[20];
    int i=0;

    printf("Digite o nome do registro que voce deseja alterar:\n");
    gets(&nomePesquisado[0]);
    fflush(stdin);
    system("cls");

    P=fopen("Registros.txt","r+");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(comparaString(&nomePesquisado[0],&(*Pstruct).nome[0])){
                i++;
                fseek(P,-100,SEEK_CUR);
                printf("Digite o novo nome do registro:\n");
                gets(&(*Pstruct).nome[0]);
                fflush(stdin);
                printf("Digite o novo endereco do registro:\n");
                gets(&(*Pstruct).end[0]);
                fflush(stdin);
                printf("Digite a nova cidade do registro:\n");
                gets(&(*Pstruct).cidade[0]);
                fflush(stdin);
                printf("Digite o novo estado do registro:\n");
                gets(&(*Pstruct).estado[0]);
                fflush(stdin);
                printf("Digite o novo CEP do registro:\n");
                gets(&(*Pstruct).cep[0]);
                fflush(stdin);
                fwrite(Pstruct,sizeof(*Pstruct),1,P);
                fclose(P);
                system("cls");
                printf("REGISTRO ALTERADO COM SUCESSO\n");
            }


        }
        else{
            if(i==0){
                printf("NAO EXISTE NENHUM REGISTRO COM ESSE NOME\n\n");
            }
            break;
        }
    }
    fclose(P);

}

void exclui(struct cadastro *Pstruct){
    FILE *P;
    char nomePesquisado[20];
    int i=0;

    printf("Digite o nome do registro que voce deseja deletar:\n");
    gets(&nomePesquisado[0]);
    fflush(stdin);
    system("cls");

    P=fopen("Registros.txt","r+");
    for(;;){
        if(fread(Pstruct,sizeof(*Pstruct),1,P)){
            if(comparaString(&nomePesquisado[0],&(*Pstruct).nome[0])){
                i++;
                fseek(P,-100,SEEK_CUR);
                printf("REGISTRO ENCONTRADO\n\n");
                deletaString(&(*Pstruct).nome[0]);
                deletaString(&(*Pstruct).end[0]);
                deletaString(&(*Pstruct).cidade[0]);
                deletaString(&(*Pstruct).estado[0]);
                deletaString(&(*Pstruct).cep[0]);
                fwrite(Pstruct,sizeof(*Pstruct),1,P);
                printf("REGISTRO DELETADO\n");
                fclose(P);
            }
        }
        else{
            if(i==0){
                printf("NAO EXISTE NENHUM REGISTR0 COM ESSE NOME\n\n");
            }
            break;
        }
    }
    fclose(P);
}
#endif // ex4
