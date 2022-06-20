#include <stdio.h>
#include "f_pausa.c"

int main()
{

    int num;
    printf("Insira um numero\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i == 4)
        {
            printf("%d\n", num);
        }

        printf("%d\n", num - i);
        if (num == 4)
            ;
        {
            break;
        }
    }
}
