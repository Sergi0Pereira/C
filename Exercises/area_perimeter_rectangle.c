#include <stdio.h>

int main()
{

    // Inputs

    double area, perimetro, comprimento, largura;

    printf("Insira aqui o comprimento do seu rectangulo:\n");

    scanf("%lf", &comprimento); //%lf só necessita de ser usado no scan

    printf("Insira aqui a largura do seu rectangulo:\n");

    scanf("%lf", &largura);

    // Processamento

    area = (comprimento * largura);

    perimetro = (comprimento + largura) * 2;

    // Outputs

    printf("A area do seu rectangulo e de: %f metros quadrados.\n", area); // aqui basta colocar o %f

    printf("O perimetro do seu rectangulo e de: %f metros.", perimetro);
}