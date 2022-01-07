#include <stdio.h>

int main()
{
    printf("Insert here the number of dogs: \n");

    double dogs;

    scanf("%lf", &dogs);

    printf("You have %f,%e,%g, dogs./n", dogs,dogs,dogs); 

    /* 
    %f- float (virgula flutuante) -- %lf para o scan de float/double
    %e- notacao cientifica
    %g- escolhe a apresentacao mais adequada
    conversao de um numero em char vai corresponder ao seu equivalente em ASCII*
    Exemplo: 65=A em ASCII*/

    return 0 ;

    
}