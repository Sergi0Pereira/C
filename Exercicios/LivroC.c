#include <stdio.h>

int main()
{

float celsius, fahrenheit;
int inicio, fim, increment;

    inicio = 0; /* limite inferior da tabela*/ 
    fim=300; /* limite superior da tabela*/
    increment=20; /* incremento */ 

    fahrenheit = inicio;

    while (fahrenheit<=fim) {
        celsius =(5.0/9.0)*(fahrenheit-32.0);
        printf("%3.0f6.1f\n", fahrenheit, celsius);
        fahrenheit=fahrenheit+increment;

        
    }

}





