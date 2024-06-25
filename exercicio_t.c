#include<stdio.h>
void main()
{
    float v,d,t;
    printf("Escreva o valor do Km em Km/m: ");
    scanf("%f", &d);
    printf("Escreva o valor de m em Km/m: ");
    scanf("%f", &t);
    v=(d*1000)/(t*60);
    printf("A velocidade em m/s eh: %.2f", v);
}
