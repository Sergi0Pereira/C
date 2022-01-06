#include <stdio.h>

int main(){

    int x,i;
    int a[x];
    
    printf("Insira o tamanho do array:\n");
    scanf("%d",&x);
    
    for(i=0;i<x;i++){
    printf("Insira o valor da %d  posicao do arreio:\n",i);
        scanf("%d",&a[i]);
        printf("%d\n", i);
        printf("%d\n", x);
        }
    return 0;
}