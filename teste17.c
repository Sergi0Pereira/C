#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int y = 0;
    int x;
    printf("Quantas posicoes pretende para o seu arreio?\n");
    scanf("%d", &x);
    int nums[x];
    printf("Insira aqui os seu numeros:\n");
    do
    {

        scanf("%d", &i);
        nums[y] = i;
        y++;

    } while (i != 0);
    for (i = 0; i < x; i++)
    {

        printf("%d\n", nums[i]);
    }
}