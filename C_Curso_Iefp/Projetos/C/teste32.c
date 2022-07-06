#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

char desafio2()
{
int n;
char caracter;
printf("Insira o seu caracter\n");
scanf("%c", &caracter);
if(caracter=='a'||caracter=='e' ||caracter=='i'||caracter=='o'||caracter=='u'){
    n=1;
}
else {
    n=0;
}
return n;
}

int main(){
    int resultado= desafio2();
    printf("%d\n", resultado);
}