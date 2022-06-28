#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void maior ()
{

    int num;
    int numMaior;

    do
    {
        printf("Insira um numero(0 para terminar):\n");
        scanf("%d", &num);
        if (num > numMaior)
        {
            numMaior=num;
        }

    } while (num != 0);

    printf("Numero maior: %d\n", numMaior);
}

int main()
{
    maior();
}
