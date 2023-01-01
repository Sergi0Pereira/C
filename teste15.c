#include <stdio.h>

int main()
{
    int num;

    printf("Insira um numero\n");
    scanf("%d", &num);
    printf("O numero pares sao:\n");

    for (int i = 1; i < num; i++)
    {

        if (i % 2 != 0)
        {
        continue;
        }
        printf("%d\n", i);
    }
}