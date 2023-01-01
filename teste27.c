#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

void idades(){
    
        int menos21=0,mais50=0;
        int idade;

        do
        {
            printf("Insira aqui a sua idade(-99 para terminar):\n");
            scanf("%d", &idade);
            if (idade <21 && idade >0){
                menos21++;
            }
            else if (idade >50){
                mais50++;
            }
        
        } while (idade != -99);
        
        printf("O numero de pessoas com menos de 21 anos e de: %d.\nO numero de pessoas com mais de 50 anos e de: %d.\n", menos21, mais50);
        }

        int main(){
            idades();
        }
