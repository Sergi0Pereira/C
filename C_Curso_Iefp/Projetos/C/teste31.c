#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void desafio()
{
    float num1,  num2, num3,  soma;
     printf("Insira aqui os seus tres valores float: \n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);

    num1 = pow(num1,2);
    
    soma=num1+num2+num3;

    printf("O quadrado do seu numero e: %.2f e a soma dos tres numeros e: %.2f",num1,soma);

}

void desafio1(float num1, float num2, float num3)
{
    
    

    num1 = pow(num1, 2);

    soma = num1 + num2 + num3;

    printf("O quadrado do seu numero e: %.2f e a soma dos tres numeros e: %.2f", num1, soma);
}

int main(){
    
    desafio();
    float num1,num2,num3,soma=0;
    printf("Insira aqui os seus tres valores float: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    desafio1(num1,num2,num3);
}