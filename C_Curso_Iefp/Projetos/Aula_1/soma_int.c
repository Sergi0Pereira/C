#include <stdio.h>
#include <math.h>

int main()
{
    int num = 2147483647, soma = 0, unidade = 0;

    for (int i = 0; num>0; i++)
    {
        unidade = num % 10;
        num/=10;
        soma = soma+ unidade;
    
    }

    printf("Soma:%i", soma);
}