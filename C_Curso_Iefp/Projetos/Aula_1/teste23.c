#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void campeao()
{
    printf("O porto e o campeao\n");
}

void nomeIdade(char nome[], int idade)
{

    printf("o seu nome e %s e a sua idade e de %d.", nome, idade);
}

int potencia(int base, int expoente)
{
    /* int base, expoente;
     printf("Insira a base: ");
     scanf("%d", &base);
     printf("Insira a expoente: ");
     scanf("%d", &expoente); se fizermos a funcao vazia podemos incluir este pedaco de codigo de modo a receber os inputs.*/
    return pow(base, expoente);
}

float raizQuadrada(int num)
{
    return sqrt(num);
}

int fatorial(int num)
{
    if (num < 1)
    {
        return 1; //
    }
    else
    {
        return num * fatorial(num - 1);
    }
}

int main()
{ // o int main() é só uma predefinicao usada.. pode se usar outros tipos..
    float numero;
    campeao(); // Funcao vazia, sem argumentos.
    nomeIdade("Sergio", 32);

    printf("%d\n", potencia(5, 6));

    int potencia = pow(5, 6);
    printf("%d\n", potencia);

    printf("Insira aqui o seu numero");
    scanf("%f", &numero);

    printf("%f\n", raizQuadrada(numero));

    printf("%d\n", fatorial(45));

    return 0;
}
