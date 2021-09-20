#include<stdio.h>
#include<stdlib.h>
#include<locale.h >

//vari�veis globais
char nome1[20], nome2[20], nome3[20];
char email1[30], email2[30], email3[30];

//prot�tipos das fun��es
void EscreverDados();
void LerDados();

//ponteiro
FILE *arquivo;

//MAIN
void main(){
    setlocale(LC_ALL, "portuguese"); //pontua��o
    short menu;
    do{
        system("color A");
        system("cls");
        printf("*******************| SEJA BEM-VINDO! |******************* \n");
        printf("\nEntrada de dados\n\nInsira sua op��o;\n");
        printf("1 * Entrada de dados\n");
        printf("2 * Lista todos os dados na tela\n");
        printf("3 * Pesquisa um nome e mostra na tela\n");
        printf("4 * Pesquisa os nomes pela 1� Letra e mostra todos na tela\n");
        printf("5 * Altera dados\n");
        printf("6 * Exclui dados\n");
        printf("7 * Sair\n");
        scanf("%d", &menu);
        system("cls");
        switch(menu){
            case 1:
                printf("**** ENTRADA DE DADOS ****\n");
                getchar();
                printf("\nInsira o 1� Nome--> ");
                gets(nome1);
                printf("Insira o 1� E-mail--> ");
                gets(email1);
                EscreverDados();
                printf("\n\n--Tecle algo para voltar ao menu--");
                getch();
                break;
            case 2:
                printf("**** LISTAGEM DE TODOS OS DADOS ****\nNomes:\n");
                getchar();
                LerDados();
                printf("--> %s\n", nome1);
                printf("--> %s\n\n", email1);
                printf("\n\n--Tecle algo para voltar ao menu--");
                getch();
                break;
            case 3:
                //a ser feita...
                printf("\n\n--Tecle algo para voltar ao menu--");
                getch();
                break;
            case 7:
                getch();
                exit(0);
                break;
        }
    }while(menu != 7);
}

void EscreverDados(){ //fun��o para escrever nos arquivos
    arquivo = fopen("arq.txt", "wt");
    fwrite(nome1, 1, sizeof(nome1), arquivo);
    fwrite(email1, 1, sizeof(email1), arquivo);
    fclose(arquivo);
}

void LerDados(){//Le todos os dados
    arquivo = fopen("arq.txt", "rt");
    fread(nome1, 1 , sizeof(nome1), arquivo);
    fread(email1, 1 , sizeof(email1), arquivo);
    fclose(arquivo);
}

void LerNomes(){//Le os nomes
    arquivo = fopen("arq.txt", "rt");
    fread(nome1, 1 , sizeof(nome1), arquivo);
    fclose(arquivo);
}
