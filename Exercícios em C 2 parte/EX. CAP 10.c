#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ex2

#ifdef ex2
/*2 - Faça um programa para gerenciar uma agenda de contatos. Para cada contato
    armazene o nome, o telefone e o aniversário (dia e mês) em uma estrutura de
    dados.
    O programa deve ter as opções:
    1 - inserir contato
    2 - altera contato
    3 - exclui contato
    4 - pesquisar um contato pelo nome
    5 - listar todos os contatos
    6 - listar os contatos cujo nome inicia com uma letra digitada
    7 - imprimir os aniversariantes do mês.
    Sempre que o programa for encerrado, os contatos devem ser escritos no arquivo.
    Quando o programa iniciar os contatos devem ser lidos do arquivo.
    O vetor de estrutura será de 4 elementos como variavel local na funcao main().
    Utilize ponteiros*/

struct contato
{
    char nome[50];
    int telefone;
    int aniversario;
};
    struct contato agenda[5];
    int cont=0;//conta os contatos

void writeData(){ //função para escrever nos arquivos
    FILE *arquivo;
    arquivo = fopen("arq.txt", "w");
    fwrite(agenda[cont].nome, 1, sizeof(agenda[0].nome), arquivo);
    fwrite(agenda[0].telefone, 1, sizeof(agenda[0].telefone), arquivo);
    fwrite(agenda[0].aniversario, 1, sizeof(agenda[0].aniversario), arquivo);
    fclose(arquivo);
}

main()
{
    int menu,i;

    FILE *arquivo;
	system("color 7");
	printf("******MENU******\n");
	printf("1 - Inserir contato.\n");
	printf("2 - Alterar contato.\n");
	printf("3 - Excluir contato.\n");
	printf("4 - Pesquisar contato pelo nome.\n");
	printf("5 - Listar todos os contatos.\n");
	printf("6 - Listar os contatos cujo nome inicia com uma letra digitada.\n");
	printf("7 - Imprimir os aniversariantes do mês.\n");

	do
	{
	scanf("%d", &menu);
	system("cls");
    switch(menu)
    {
        case 1:
        printf("******ENTRADA DE DADOS******\n");
        getchar();
        printf("Digite o nome: ");
        gets(agenda[0].nome);
        printf("Digite o numero: ");
        scanf("%d",&agenda[0].telefone);
        printf("Digite a data do seu aniversário(dia/mes): ");
        scanf("%d",&agenda[0].aniversario);
        writeData();
        cont++;
        getch();
        break;
    }

	}while(menu != 7);
}
#endif // ex2


/*****************************************************************************

			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Faça um programa para:
    1 - criar/abrir um arquivo texto de nome ”arq.txt”,
    2 - receba via teclado diversos caracteres (um por vezes)e armazene-os
        nesse arquivo. O caracter '0' finaliza a entrada de dados.
    3 - abra o arquivo. Leia e imprima na tela todos os caracteres armazenados.



3 - Faça um programa para o controle de mercadorias em uma despensa doméstica.
    Cada produto será armazenado um código numérico, descrição e quantidade atual
    numa estrutura de dados. Utilize ponteiros. A estrutura deve ser declarada como
    variavel local na funcao main().
    O programa deve ter as opções:
    1 - inclui produtos
    2 - altera produtos
    3 - exclui produtos
    4 - pesquisar uma mercadoria pela descrição
    5 - listar todos os produtos
    6 - listar os produtos não disponíveis.
    7 - alterar a quantidade atual
    Escreva os itens das mercadorias direto no arquivo. (utilize a funcao fseek).

4 - A partir do exercico 6 do capitulo de funcoes, retire o vetor de estrutura e
    escreva e leia os registros direto no arquivo. (utilize a funcao fseek).
*/

