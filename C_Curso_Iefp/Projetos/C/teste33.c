#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

struct Turma
{
    int ano;
    char letra;
};

int main()
{
    struct Turma t1; // declarar a variavel to tipo estrutura
    struct Turma t2; // declarar a variavel to tipo estrutura
    t1.ano = 9;      // colocar valores nas variaveis
    t1.letra = 'a';  // colocar valores nas variaveis
    t2.ano = 10;     // colocar valores nas variaveis
    t2.letra = 'b';  // colocar valores nas variaveis

    printf("%d\n", t1.ano);

    printf("%c\n", t1.letra);

    printf("%d\n", t2.ano);

    printf("%c\n", t2.letra);
}