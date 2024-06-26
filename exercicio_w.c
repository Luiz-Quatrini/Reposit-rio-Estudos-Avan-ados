#include<stdio.h>
void main()
{
    float a,b;
    printf("Digite uma medida em pes: ");
    scanf("%f", &a);
    b= a*0.3048;
    printf("O valor em metros eh: %.4f", b);
}
