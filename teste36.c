#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct list
{
    char nome[30];
};

int main()
{
    int x;
    char nome[30];
    printf("Insira o numero de nomes que pretende inserir: \n");
    scanf("%d", &x);
    printf("%d", x);
    struct list nomes[x];
    int i = 1;
    while (i <= x)
        ;
    {
        printf("Insira o seu nome: ");
        scanf("%s", &nome);
        strcpy(nomes[i].nome, nome);
        i++;
    }
    i = 1;

    printf("Nomes inseridos com sucesso! \n");
    while (i <= x)
    {
        printf("O seu numero e: %d - %s \n", i, nomes[i].nome);
        i++;
    }
}
