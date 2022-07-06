#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


struct list
{
    char nome[30];
    int nif;
    char morada[50];
    int telefone;
};

int main()
{
    char nome[30];
    int nif, c;
    char morada[50];
    int telefone;

    int x = 0;
    printf("Insira o numero de individuos que pretende inserir: \n");
    scanf("%d", &x);
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    struct list individuos[x];
    int i = 1;
    char resp;
    while (i <= x)

    {
        printf("Insira o seu nome: ");

        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        strcpy(individuos[i].nome, nome);

        printf("Insira a sua Morada: ");

        fgets(morada, sizeof(morada), stdin);
        morada[strcspn(morada, "\n")] = '\0';
        strcpy(individuos[i].morada, morada);

        printf("Insira o seu Nif: ");
        scanf("%d", &nif);
        individuos[i].nif = nif;

        printf("Insira o seu telefone: ");
        scanf("%d", &telefone);
        individuos[i].telefone = telefone;

        while ((c = getchar()) != '\n' && c != EOF)
            ;

        printf("Deseja continuar? s/n");
        scanf(" %c", &resp);
        while ((c = getchar()) != '\n' && c != EOF);
            
        if (resp == 's')
        {
            i++;
        }
        else
        {
            break;
        }
    }
    i = 1;

    printf("Nomes inseridos com sucesso! \n");
    while (i <= x)
    {

        printf("Pessoa numero: %d \n", i);
        printf("Nome: %s \n", individuos[i].nome);
        printf("Nif: %d  \n", individuos[i].nif);
        printf("Morada: %s \n", individuos[i].morada);
        printf("Telefone: %d \n", individuos[i].telefone);

        i++;
    }
}
