#include <stdio.h>

int adicao();


int main(){

    adicao();
        printf("Aqui esta sua adicao!");
        sub(int n1,int n2);
    
}
        int adicao(void)
        
{       
        int n1,n2,soma;
        printf("Insira o primeiro numero: \n");
        scanf("%d", &n1);
        printf("Insira o segundo numero: \n");
        scanf("%d",&n2);
        soma=n1+n2;
        printf("A adicao dos dois numeros e igual a %d.\n", soma);
}
        int sub(int x,int y);

{       
        int sub,x,y;
        sub=x-y;
        printf("A subtraccao dos dois numeros e igual a %d.\n", sub);
        return sub;
}
        
        
