/*0= para o programa
n= numero de inteiros pares
v= ultimo inteiro positivo ımpar (se nao existir entao é v=0)*/

#include<stdio.h>

int main(){

int i,v=0,n=0;

scanf("%d",&i);
    while(i!=0){

    if(i%2!=0&&i>0){
    v=i;
    }
    if(i%2==0){
    n++;
    }
    scanf("%d",&i);
    }      

printf("%d %d",n, v);

return 0;
}
