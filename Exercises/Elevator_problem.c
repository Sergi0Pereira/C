#include <stdio.h>
#include <stdlib.h>


int main(){

// variaveis
int elevador1,elevador2,andar,dist1,dist2;

// inputs    

printf("Em que andar se encontra?\n");

    scanf("%d",&andar);

printf("Qual e a posicao do elevador 1?\n");

    scanf("%d",&elevador1);

    if(elevador1==999){
        printf("Elevador 1 indisponivel.\n");
    }

printf("Qual e a posicao do elevador 2?\n");

    scanf("%d",&elevador2);

    if(elevador2==999){
        printf("Elevador 2 indisponivel.\n");
    }
// Processamento
dist1=abs(elevador1-andar); // abs = distancia absoluta
dist2=abs(elevador2-andar);

    if(elevador1==999 && elevador2==999){
        printf("Ambos os elevadores estao indisponiveis");
            return(1);
    }
    if(elevador1==elevador2){
        printf("O elevador 1 foi chamado.");
    }
    else if(dist1<dist2){
        printf("O elevador 1 foi chamado.");
    }
    else if(dist1==dist2 && elevador1>elevador2){
        printf("O elevador 1 foi chamado.");
    }
    else if(dist1>dist2){
        printf("O elevador 2 foi chamado.");
    }
    else if(dist1==dist2 && elevador1<elevador2){
        printf("O elevador 2 foi chamado.");
    }

}







    
        