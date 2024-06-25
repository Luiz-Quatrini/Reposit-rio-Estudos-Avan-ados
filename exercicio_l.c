#include <stdio.h>
void main()
{
    float dolar, real, valor_dolar;
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &dolar);
    printf("Digite uma quantidade de reais a serem convertidos: ");
    scanf("%f", &real);
    valor_dolar = real/dolar;
    printf("O valor em dolares eh: %.2f\n", valor_dolar);
}
