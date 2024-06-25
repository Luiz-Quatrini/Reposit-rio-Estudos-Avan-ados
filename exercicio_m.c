#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g;
    printf("Escreva o numero A: ");
    scanf("%d", &a);
    printf("Escreva o numero B: ");
    scanf("%d", &b);
    printf("Escreva o numero C: ");
    scanf("%d", &c);
    d=a*a;
    e=b*b;
    f=c*c;
    g=d+e+f;
    printf("A soma dos quadrados de A, B e C eh: %d", g);
}
