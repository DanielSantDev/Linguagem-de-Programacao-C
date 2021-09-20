#include <stdio.h>
#include <stdlib.h>
#define ex3

#ifdef ex1
int main()
{
    short hdint;
    float f;
    long l;
    double d;
    int n;
    char c;

    printf("digite um short\n");
    scanf("%hd",&hdint);
    printf("digite um float\n");
    scanf("%f",&f);
    printf("digite um long\n");
    scanf("%ld",&l);
    printf("digite um double\n");
    scanf("%lf",&d);
    printf("digite um int\n");
    scanf("%d",&n);
    printf("digite um caractere:\n");
    getchar();
    c=getchar();
    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    %-6hd               %-6ld               %-6d                 \n",hdint,l,n);
    printf("              %-6.1f              %-6.1lf             %-1c       ",f,d,c);
    return 0;
}
#endif

#ifdef ex2
int main(){
    int n;

    printf("Digite a quantidade de segundos:\n");
    scanf("%d",&n);
    printf("%dh %dmin %ds",(n/60)/60,(n/60)-(60*((n/60)/60)),n%60);
    return 0;
}
#endif // ex2

#ifdef ex3
int main(){
    int n,inverso;

    printf("digite um inteiro de 3 digitos:\n");
    scanf("%d",&n);
    inverso=(n%10)*100+((n%100)/10)*10+(n-((n%100)-n%10)-n%10)/100;
    printf("Numero lido= %d\nNumero gerado= ",n);
    if(n%10==0){
        printf("0");
    }
    printf("%d",inverso);
    return 0;
}

#endif // ex3

#ifdef ex4
int main(){
    int a,b;
    printf("Digite os valores de a e b:\n");
    scanf("%d%d",&a,&b); //a=10  b=20
    printf("\nvalores iniciais\na= %d\nb= %d\n\n",a,b);
    b+=a;     // b=30 a=10
    a=b-a;    // a=20 b=30
    b-=a;     // b=10 a=20
    printf("valores finais\na= %d\nb= %d",a,b);
    return 0;
}
#endif // ex4

#ifdef ex5
int main(){

    int n;
    int cem,cinquenta,dez,cinco,dois,um;

    printf("Digite o valor em reais a ser decomposto:\n");
    scanf("%d",&n);
    printf("\nO valor lido foi: %d\n\n",n);
    printf("Decomposicao:\n\n");

    cem=n/100;
    if(cem*100==n){
        printf("%d notas de 100\n",cem);
        return 0;
    }
    n-=cem*100;
    cinquenta=n/50;
    if(cinquenta*50==n){
        printf("%d notas de 100\n%d notas de 50",cem,cinquenta);
        return 0;
    }
    n-=cinquenta*50;
    dez=n/10;
    if(dez*10==n){
        printf("%d notas de 100\n%d notas de 50\n%d notas de 10",cem,cinquenta,dez);
        return 0;
    }
    n-=dez*10;
    cinco=n/5;
    if(cinco*5==n){
        printf("%d notas de 100\n%d notas de 50\n%d notas de 10\n%d notas de 5",cem,cinquenta,dez,cinco);
        return 0;
    }
    n-=cinco*5;
    dois=n/2;
    if(dois*2==n){
        printf("%d notas de 100\n%d notas de 50\n%d notas de 10\n%d notas de 5\n%d notas de 2",cem,cinquenta,dez,cinco,dois);
        return 0;
    }
    n-=dois*2;
    um=n/1;
    if(um*1==n){
        printf("%d notas de 100\n%d notas de 50\n%d notas de 10\n%d notas de 5\n%d notas de 2\n",cem,cinquenta,dez,cinco,dois);
        printf("%d notas de 1\n",um);
    }
    return 0;
}
#endif // ex5
