#include <stdio.h>
#include <stdlib.h>

#define ex5

#ifdef ex1
int main()
{
    char matriz[5][8];

    for(int i=0;i<5;i++){
        gets(matriz[i]);
    }

    printf("        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("  %-40s%-8s\n",matriz[0],matriz[4]);
    printf("            %-20s%-18s\n",matriz[1],matriz[3]);
    printf("                      %-28s\n",matriz[2]);
    return 0;
}

#endif

#ifdef ex2
int main(){

    char matriz[3][11];

    for(int i=0;i<3;i++){
        gets(matriz[i]);
    }

    printf("        10        20        30        40        50        60\n");
    printf("123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %-20s%-20s%-16s",matriz[0],matriz[1],matriz[2]);
    return 0;
}
#endif // ex2

#ifdef ex3
int main(){

    char vetor[11];
    gets(vetor);

    for(int i=0;vetor[i]!='\0';i++){
        vetor[i]-=32;
    }

    puts(vetor);
    return 0;
}
#endif // ex3

#ifdef ex4
int main(){

    char vetor[11];
    gets(vetor);

    for(int i=0;vetor[i]!='\0';i++){
        vetor[i]+=32;
    }

    puts(vetor);
    return 0;
}

#endif // ex4

#ifdef ex5
int main(){

    while(1){

    char vetor1[11], vetor2[11];
    int count=0,count2=0,i=0,continuar;

    printf("Digite a primeira string:\n");
    gets(vetor1);
    printf("Digite a segunda string:\n");
    gets(vetor2);

    while(vetor1[i]!='\0'){    //conta o tamanho da palavra 1
        count++;
        i++;
    }
    i=0;
    while(vetor2[i]!='\0'){   //conta o tamanho da palavra 2
        count2++;
        i++;
    }
    if(count!=count2){         //se os tamanhos forem diferentes, o programa acaba aqui, mas pergunta se quer continuar
        printf("As strings sao diferentes\n\n");
        printf("Deseja continuar?(digite numero positivo para continuar, negativo para sair)\n");
        scanf("%d",&continuar);
        fflush(stdin);
        if(continuar<0){
            return 0;
        }
    }
    for(i=0;i<count;i++){          //loop para verificar se as string sao iguais
        if(vetor1[i]!=vetor2[i]){
            printf("As strings sao diferentes\n\n");
            break;
        }
        if(i==(count-1)){
            printf("As strings sao iguais\n\n");

        }
    }
    printf("Deseja continuar?(digite numero positivo para continuar, negativo para sair)\n");
    scanf("%d",&continuar);
    fflush(stdin);
    if(continuar<0){
        return 0;
    }
    }
}

#endif // ex5
