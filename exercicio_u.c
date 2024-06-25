#include<stdio.h>
void main()
{
    float v,r;
    printf("Escreva o raio da esfera: ");
    scanf("%f", &r);
    v=(4*3.1415926536*(r*r*r)/3);
    printf("O volume da esfera eh: %.2f", v);
}
