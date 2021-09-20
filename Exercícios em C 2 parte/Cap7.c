#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ex1

/*Grupo 12:
  Daniel Santana
  Victor Monteiro
*/

#ifdef ex1
struct estrutura{
        char c;
        int i;
        long l;
        float f;
        double d;
        unsigned char uc;
        unsigned int ui;
        unsigned long ul;
};

int main()
{
    int repeat;
    struct estrutura x;

    while(1){
        printf("digite um caractere:\n");
        x.c=getchar();
        fflush(stdin);

        printf("digite um int:\n");
        scanf("%d",&x.i);
        fflush(stdin);

        printf("digite um long:\n");
        scanf("%ld",&x.l);
        fflush(stdin);

        printf("digite um float:\n");
        scanf("%f",&x.f);
        fflush(stdin);

        printf("digite um double:\n");
        scanf("%lf",&x.d);
        fflush(stdin);

        printf("digite um unsigned char:\n");
        scanf("%c",&x.uc);
        fflush(stdin);

        printf("digite um unsigned int:\n");
        scanf("%u",&x.ui);
        fflush(stdin);

        printf("digite um unsigned long:\n");
        scanf("%lu",&x.ul);
        fflush(stdin);

        printf("        10        20        30        40        50        60        70\n");
        printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
        printf("    %-10c%-10d%-20ld%-20.2f%-10.2lf\n",x.c,x.i,x.l,x.f,x.d);
        printf("          %-20c%-20u%-20lu\n",x.uc,x.ui,x.ul);

        printf("Deseja repetir o programa?(Digite um numero positivo para repetir, negativo para encerrar)\n");
        scanf("%d",&repeat);
        fflush(stdin);
        if(repeat>=0){

            continue;
        }
        else{
            return 0;
        }
    }
}
#endif

#ifdef ex2
struct estrutura{
        char nome[15];
        char end[30];
        char cidade[30];
        char estado[3];
        long cep;
};

int main(){

    int menu;
    int i;
    struct estrutura vetor[4];

    while(1){
        printf("\n1-Entrada de dados\n2-Mostra os dados\n3-Sair");
        printf("\n\nEscolha um opcao:\n");
        scanf("%d",&menu);
        fflush(stdin);
        system("cls");
        switch(menu){
            case 1:
                printf("Entrada de dados:\n");
                for(i=0;i<4;i++){
                    printf("\nDigite a string nome do struct numero %d:\n",i);
                    gets(vetor[i].nome);
                    fflush(stdin);
                    printf("Digite o endereco do struct numero %d:\n",i);
                    gets(vetor[i].end);
                    fflush(stdin);
                    printf("Digite a cidade do struct numero %d:\n",i);
                    gets(vetor[i].cidade);
                    fflush(stdin);
                    printf("Digite a sigla do estado do struct numero %d(apenas 2 caracteres):\n",i);
                    gets(vetor[i].estado);
                    fflush(stdin);
                    printf("Digite o cep do struct numero %d:\n",i);
                    scanf("%ld",&vetor[i].cep);
                    fflush(stdin);
                    system("cls");
                }
                break;
            case 2:
                printf("Mostrando os dados:\n");
                for(i=0;i<4;i++){
                    printf("\nNome do struct numero %d: ",i);
                    puts(vetor[i].nome);

                    printf("Endereco do struct numero %d: ",i);
                    puts(vetor[i].end);

                    printf("Cidade do struct numero %d: ",i);
                    puts(vetor[i].cidade);

                    printf("Estado do struct numero %d: ",i);
                    puts(vetor[i].estado);

                    printf("Cep nome do struct numero %d: ",i);
                    printf("%ld\n\n",vetor[i].cep);

                }
                break;
            case 3:
                printf("Saiu do programa\n");
                return 0;
            default:
                printf("Opcao invalida, digite uma opcao valida");
                break;
        }
    }






}
#endif // ex2

#ifdef ex3
struct coordenadas{
    float coordX;
    float coordY;
};

int main(){

    float dist=0;
    struct coordenadas pontos[2];
    int repeat;

    pontos[0].coordX=0;
    pontos[0].coordY=0;

    while(1){
        printf("\nCalculo da distancia em relacao a origem:\n\n");

        printf("Digite a coordenada X:\n");
        scanf("%f",&pontos[1].coordX);

        printf("Digite a coordenada Y:\n");
        scanf("%f",&pontos[1].coordY);

        printf("\nponto escolhido: (%.0f,%.0f)\n",pontos[1].coordX,pontos[1].coordY);

        dist= (pontos[1].coordX-pontos[0].coordX)*(pontos[1].coordX-pontos[0].coordX);
        dist+= (pontos[1].coordY-pontos[0].coordY)*(pontos[1].coordY-pontos[0].coordY);
        dist=sqrt(dist);
        printf("\nDistancia= %.2f\n",dist);

        printf("\n\nDeseja repetir o programa?(digite um numero positivo para repetir, negativo para encerrar)\n");
        scanf("%d",&repeat);
        if(repeat>=0){
                system("cls");
            continue;
        }
        else{
            return 0;
        }
    }




}
#endif // ex3

