#include <stdio.h>

void soma(){
    int n1,n2,soma=0;
    printf("Por favor insira aqui o seu primeiro numero: \n");
    scanf("%d", &n1);
    printf("Por favor insira aqui o seu segundo numero: \n");
    scanf("%d", &n2);
    soma=n1+n2;

    printf("O resultado da soma dos dois valores e de: %d\n",soma);

}

int main(){

    soma();
    printf("E as contas continuam!\n");
    soma();
    soma();
    soma();
    
    
}
