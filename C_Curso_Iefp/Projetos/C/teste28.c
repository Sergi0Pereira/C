#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void numero()
{

    int num = 0;
    

    do
    {
        printf("Insira um numero entre 1 e 4:\n");
        scanf("%d", &num);
        if (num > 0 && num < 5)
        {
            printf("Programa Concluido.\nO seu numero e o : %d\n", num);
        }
        else  
        {
            printf("Numero Invalido.\n");
        }

    } while (num<1 || num>4);
}

int main()
{
    numero();
}
