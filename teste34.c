#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct Aluno
{
    int num;
    char nome[30]; // String é um arreio de caracteres 
};

int main()
{
    struct Aluno a1, a2; // declarar a variavel to tipo estrutura

    struct Aluno a3={1,"Quelhas"};

    for(int i=0; i<)

    strcpy(a1.nome, "Sergio"); // A função strcpy() copia a string apontada por fonte(incluindo o caractere nulo(espaços)) para o destino.

    a1.num = 10;  // colocar valores nas variaveis

    strcpy(a2.nome, "Caio"); 

    printf("%d\n", a1.num);

    printf("%s\n", a1.nome);

    printf("%s\n", a2.nome);

    getch();
}