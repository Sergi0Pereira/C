#include<stdio.h>

int main(){
    int num=0;
    printf("Insira aqui um numero :");
    scanf("%i",&num);
    int i=0;
    while( i<num) {
        printf("%i \n", i);
        i++;
    }
    i=0;
    do{
        printf("%i \n", i);
        i++;
    }
    while( i<num);
}