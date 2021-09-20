#include <stdio.h>
#include <stdlib.h>

#define ex1

#ifdef ex1
int main(){

    int in[3],i;

    for(i=0;i<3;i++){
        printf("Digite o int[%d]\n",i);
        scanf("%d",&in[i]);
    }
    long li[3];

    for(i=0;i<3;i++){
        printf("Digite o long[%d]\n",i);
        scanf("%ld",&li[i]);
    }
    unsigned int ui[3];

    for(i=0;i<3;i++){
        printf("Digite o unsigned[%d]\n",i);
        scanf("%u",&ui[i]);
    }
    float f[3];

    for(i=0;i<3;i++){
        printf("Digite o float[%d]\n",i);
        scanf("%f",&f[i]);
    }
    double d[3];

    for(i=0;i<3;i++){
        printf("Digite o double[%d]\n",i);
        scanf("%lf",&d[i]);
    }

    printf("        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("  %-20d%-20ld%-8u\n",in[0],li[0],ui[0]);
    printf("            %-20.1f%-18.1lf\n",f[0],d[0]);
    printf("  %-20d%-20ld%-8u\n",in[1],li[1],ui[1]);
    printf("            %-20.1f%-18.1lf\n",f[1],d[1]);
    printf("  %-20d%-20ld%-8u\n",in[2],li[2],ui[2]);
    printf("            %-20.1f%-18.1lf\n",f[2],d[2]);
    return 0;
}
#endif // ex1

#ifdef ex2
int main(){

    int vetor[10];
    int i; //contador do for externo, responsavel por apontar a posicao que está recebendo o valor atual
    int count; // contador responsavel por apontar para a posicao em que o valor atual esta durante o sort
    int j; // contador responsavel por apontar para a posicao do vetor que sera comparada com o valor atual durante o sort
    int aux; //variavel que auxilia na troca de valores durante o sort

    for(i=0;i<10;i++){
        printf("Digite o valor da posicao vetor[%d]\n",i);
        scanf("%d",&vetor[i]);
        count=i;
        j=i-1;
        do{
            if(i==0){
                break;
            }
            if(vetor[count]>vetor[j]){
                //se o valor atual for maior que o anterior, o loop de sort já é encerrado
                break;
            }
            if(vetor[count]<vetor[j]){
                aux=vetor[j];
                vetor[j]=vetor[count];
                vetor[count]=aux;
                count--;
            }
            j--;
        }while(j>=0);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("vetor[%d]= %d\n",i,vetor[i]);
    }


    return 0;
}
#endif // ex2

#ifdef ex3
int main(){

    int vetor[10],inverso[10];
    int i;

    for(i=0;i<10;i++){
        printf("Digite o valor do vetor[%d]:\n",i);
        scanf("%d",&vetor[i]);
        inverso[9-i]=vetor[i];
    }

    for(i=0;i<10;i++){
        if(vetor[i]!=inverso[i]){
            printf("\nO vetor nao eh palindromo\n");
            return 0;
        }
    }
    printf("\nO vetor eh palindromo\n");

    return 0;
}
#endif // ex3

#ifdef ex4
int main(){

    int A[2][3],B[2][3],C[2][3];
    int i,j,k;

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor da posicao A[%d][%d]:\n",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor da posicao B[%d][%d]:\n",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            C[i][j]=A[i][j]-B[i][j];
        }
    }

    for(k=0;k<3;k++){
        for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                if(k==0){
                    printf("A[%d][%d]= %d\n",i,j,A[i][j]);
                }
                else if(k==1){
                         printf("B[%d][%d]= %d\n",i,j,B[i][j]);
                }
                else if(k==2){
                         printf("C[%d][%d]= %d\n",i,j,C[i][j]);
                }
            }
        }
        printf("\n\n");
    }
    return 0;
}
#endif // ex4

#ifdef ex5
int main()
{
    int matriz[5][5];
    int i,j,valor,count=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite o valor de matriz[%d][%d]:\n",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("Digite o valor a ser buscado na matriz\n");
    scanf("%d",&valor);

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(valor==matriz[i][j]){
                count++;
                printf("Valor encontrado na posicao matriz[%d][%d]\n",i,j);
            }
        }
    }
    if(count==0){
        printf("Valor nao encontrado\n");
    }
    else
        printf("Valor encontrado %d vezes na matriz",count);
    return 0;
}
#endif
