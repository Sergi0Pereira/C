#include <stdio.h>
#include <ctype.h>

int main()

{
    // Declarar uma vari

    int dia=0;
    char res;
    do
    {

        printf("Insira o numero do seu dia:");
        scanf("%d", &dia);

        switch (dia)
        {
        case 1:
            printf("Domingo\n");
            break;

        case 2:
            printf("Segunda-feira\n");
            break;

        case 3:
            printf("Terça-Feira\n");
            break;

        case 4:
            printf("Quarta-Feira\n");
            break;

        case 5:
            printf("Quinta-Feira\n");
            break;

        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;

        default:
            printf("O seu numero de dia e invalido!");
            break;
        }
        printf("Deseja inserir outro dia?\n");
        scanf(" %c", &res);
        res=tolower(res);
      
    }
    while (res == 's');
    printf("A sua consulta terminou.");
}