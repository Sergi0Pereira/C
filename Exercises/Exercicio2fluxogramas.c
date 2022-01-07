#include <stdio.h>

int main(){

    int n1,n2,n3,n4;

    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    
    n4=n2+n3;

    if (n4==n1){
        printf("Os numeros sao iguais");
    }
    else if (n4<n1){
        printf("n1 e maior que n4");
    }
    else{
        printf("n1 e menor que n4");

    }
}

