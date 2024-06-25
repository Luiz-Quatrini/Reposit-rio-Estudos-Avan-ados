#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("Escreva o numero A: ");
    scanf("%d", &a);
    printf("Escreva o numero B: ");
    scanf("%d", &b);
    printf("Escreva o numero C: ");
    scanf("%d", &c);
    d=a+b+c;
    e=d*d;
    printf("O quadrado da soma de A, B e C eh: %d", e);
}
