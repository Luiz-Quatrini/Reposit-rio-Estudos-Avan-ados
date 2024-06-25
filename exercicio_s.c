#include<stdio.h>
void main()
{
    float A,B,c,d,e,f;
    printf("Escreva um valor para A: ");
    scanf("%f", &A);
    printf("Escreva um valor para B: ");
    scanf("%f", &B);
    c=A+B;
    d=A-B;
    e=A*B;
    f=A/B;
    printf("\nA soma eh: %.2f \n",c);
    printf("A diferenca eh: %.2f \n",d);
    printf("O produto eh: %.2f \n",e);
    printf("O quociente eh: %.2f \n",f);
}
