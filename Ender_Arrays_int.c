#include <stdio.h>

int main(){

int a=5;
int b=5;
int c=5;
int d=5;
int f=5;
int g=5;
int h=5;
int j=5;
int ab[10];

printf("%d\n",&a);
printf("%d\n",&b);
printf("jshdkjskd\n");
printf("%d\n",&c);
printf("%d\n",&d);
printf("%d\n",&f);
printf("%d\n",&g);
printf("%d\n",&h);
printf("%d\n",&j);
printf("%d\n",&ab[0]);
printf("%d\n",&ab[10]); // calcular posicao do array: 1first adress + (index*sizes of int)
printf("%d\n",&ab[12]); // no bound checking!!!
return 0;
}
