#include <stdio.h>

int main(){

    
    int idade,soma=0,media;

    for(int x=1;x<=10;x++){

        printf("Insira aqui a sua idade \n");

        scanf("%d",&idade);

        soma=soma+idade;

        media = soma/x;
    }
    
    printf("A soma das idade e de %d.\n" , soma);

    printf("A media das idade e de %d." , media);
}


