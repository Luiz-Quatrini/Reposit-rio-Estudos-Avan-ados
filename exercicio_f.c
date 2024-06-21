#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Digite o algorismo a: ");
    scanf("%d", &a);
    printf("Digite o algorismo b: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("Valor trocado:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
