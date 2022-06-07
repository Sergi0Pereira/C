#include <stdio.h>

int main()
{
    int num=11,soma=0,unidade=0;

    for(int i=0;num!=0;i++){
        unidade=num%10;
        num%=10;
        soma+=unidade;

    }

    printf("Soma:%i",soma);

}