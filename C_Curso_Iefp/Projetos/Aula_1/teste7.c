#include <stdio.h>

int main()

{

    int n;
    printf("Insira um numero:\n ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d e positivo", n);
    }
    else if (n < 0)
    {
        printf("%d e negativo", n);
    }
    else
    {
        printf("%d e igual a zero", n);
    }
}
