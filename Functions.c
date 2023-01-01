#include <stdio.h>

int adicao(){

    int n1,n2,soma;
        printf("Insira o primeiro numero: \n");
        scanf("%d", &n1);
        printf("Insira o segundo numero: \n");
        scanf("%d",&n2);

        soma=n1+n2;

        printf("A adicao dos dois numeros e igual a %d.\n", soma);

        }

int sub(){

    int n1,n2,sub;
        printf("Insira o primeiro numero: \n");
        scanf("%d", &n1);
        printf("Insira o segundo numero: \n");
        scanf("%d",&n2);

        sub=n1-n2;

        printf("A subtraccao dos dois numeros e igual a %d.\n", sub);
        
        }

int main(){

        adicao();
        sub();
        return 0;
}

        
    

        
        
