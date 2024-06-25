#include<stdio.h>
void main()
{
    float SM,PR,NS,a;
    printf("Escreva o Salario Mensal: ");
    scanf("%f", &SM);
    printf("Escreva o Percentual de Reajuste: ");
    scanf("%f", &PR);
    a=SM*(PR/100);
    NS=SM+a;
    printf("O novo salario eh: %.2f", NS);
}
