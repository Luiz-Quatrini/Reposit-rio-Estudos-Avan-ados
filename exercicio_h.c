#include<stdio.h>
void main()
{
    int v,c,l,a;
    printf("Digite o comprimento: \n");
    scanf("%d", &c);
    printf("Digite a largura: \n");
    scanf("%d", &l);
    printf("Digite a altura: \n");
    scanf("%d", &a);
    v=c*l*a;
    printf("O volume eh %d (Unidade de Medida).", v);
}
