#include <stdio.h>
#include "f_pausa.c"
#include <stdbool.h>

int main()
{

    int num;
    printf("Insira um numero\n");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("O numero %d  e primo.\n", num);
            break;
        }
        
        else if (num % i != 0 && i == num - 1)
        {
            printf("O numero %d  nao e primo.\n", num);
        }
    }

    if (num == 1)
    {
        printf("O numero %d  nao e primo.\n", num);
    }
}
