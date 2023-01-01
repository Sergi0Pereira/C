#include <stdio.h>

int main()
{

    int x, y, resto, quo, soma, sub, mult;

    float div;

    printf("Insira o primeiro valor:");

    scanf(" %d", &x);

    printf("Insira o segundo valor:");

    scanf(" %d", &y);

    soma = x + y;

    sub = x - y;

    mult = x * y;

    printf("%d + %d = %d", x, y, soma);

    printf("\n");

    printf("%d - %d = %d", x, y, sub);

    printf("\n");

    printf("%d x %d = %d", x, y, mult);

    printf("\n");

    if (y == 0)
    {

        printf("Erro! Divisao por 0.");

        printf("\n");
    }
    else
    {

        div = (float)x / y;

        quo = (int)x / y;

        resto = x % y;

        printf("%d / %d = %.2f", x, y, div);

        printf("\n");

        printf("O quociente da divisao e: %d", quo);

        printf("\n");

        printf("O resto e: %d", resto);
    }

    return 0;
}