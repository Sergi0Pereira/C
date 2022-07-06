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
    struct list nomes[x];

    for (int i = 1; i <= x; i++)
    {
        printf("Insira o seu nome: ");
        scanf("%s", &nome);
        strcpy(nomes[i].nome, nome);
    }

    printf("Nomes inseridos com sucesso! \n");
    for (int i = 1; i <= x; i++)
    {
        printf("O seu numero e: %d - %s \n", i, nomes[i].nome);
        }
    }

