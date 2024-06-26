#include<stdio.h>
void main()
{
    int A,B,c,d;
    printf("Digite um numero A: ");
    scanf("%d", &A);
    printf("Digite um numero B: ");
    scanf("%d", &B);
    c= A/B;
    d= c*c;
    printf("O resultado eh: %d", d);
}
