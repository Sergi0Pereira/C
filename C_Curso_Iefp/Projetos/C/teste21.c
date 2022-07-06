#include <stdio.h>
#include <conio.h>

int main(){
char n = 'p';
char* ponteiro=&n; //ponteiro pode ser *ptr, * ptr


printf("%c e o valor da variavel", n);
printf("\n");
printf("%p e o endereco da variavel", &n); //& aponta para o endereco da variavel 
printf("\n");


printf("%p é o valor do ponteiro", ponteiro);
printf("\n");
printf("%c é o valor da variável a partir do endereço de memória",*ponteiro);
printf("\n");
printf("%d é o codigo ascii da variavel.",*ponteiro);


printf("\n");
printf("Press any key to exit");
getch();
return 0;
}