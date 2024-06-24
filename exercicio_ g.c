#include <stdio.h>
void main()
{
    int A,B,C,D,adc1,adc2,adc3,adc4,adc5,adc6,mult1,mult2,mult3,mult4,mult5,mult6;
    printf("Digite um valor para A: ");
    scanf("%d", &A);
    printf("Digite um valor para B: ");
    scanf("%d", &B);
    printf("Digite um valor para C: ");
    scanf("%d", &C);
    printf("Digite um valor para D: ");
    scanf("%d", &D);
    adc1 = A + B;
    adc2 = A + C;
    adc3 = A + D;
    adc4 = B + C;
    adc5 = B + D;
    adc6 = C + D;
    mult1 = A * B;
    mult2 = A * C;
    mult3 = A * D;
    mult4 = B * C;
    mult5 = B * D;
    mult6 = C * D;
    printf("Resultados das adicoes: \n");
    printf("A + B = %d\n", adc1);
    printf("A + C = %d\n", adc2);
    printf("A + D = %d\n", adc3);
    printf("B + C = %d\n", adc4);
    printf("B + D = %d\n", adc5);
    printf("C + D = %d\n", adc6);
    printf("Resultados das multiplicacoes: \n");
    printf("A x B = %d\n", mult1);
    printf("A x C = %d\n", mult2);
    printf("A x D = %d\n", mult3);
    printf("B x C = %d\n", mult4);
    printf("B x D = %d\n", mult5);
    printf("C x D = %d\n", mult6);
}
