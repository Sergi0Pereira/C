#include <stdio.h>
#include <conio.h>

int main(){
char str[] = "cenario";
char* pstr = str; // ponteiro
char letra='b';

printf("%s e o valor da variavel.", str);
printf("\n");
printf("%p e o valor do endereco de memoria.", &str);
printf("\n");
printf("%p e o valor do ponteiro.", pstr);
printf("\n");
printf("%c e o valor da variavel a partir do endereco de memoria", *pstr); // aqui só devolve a primeira letra da palavra.
printf("\n");
printf("%p e o valor da variavel a partir do endereco de memoria da letra b", &letra); // aqui só devolve a primeira letra da palavra.
printf("\n");
printf("%d e o codigo ascii da variavel", *pstr); // aqui devolve o código ascii da letra apenas.

printf("\n");
printf("Prima algo para sair.");
getch();
return 0;
}