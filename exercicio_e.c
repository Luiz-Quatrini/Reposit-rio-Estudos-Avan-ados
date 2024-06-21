#include <stdio.h>
void main()
{
    float v, t, tp, p;

    printf("Digite o valor da prestacao: ");
    scanf("%f", &v);
    printf("Digite a taxa de juros ao mes (em porcentagem): ");
    scanf("%f", &t);
    printf("Digite o tempo em meses: ");
    scanf("%f", &tp);

    p = v + (v * (t / 100) * tp);

    printf("O valor da prestacao eh: %.2f\n", p);
}
