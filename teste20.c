#include <stdio.h>
#include <conio.h>

int main(){
char n ='a';
char str[] = "caneta";
char letra='c';
char* pstr= str;
printf("%s e o valor da variavel" ,str);
printf("\n");
printf("%p e o valor do endereco de memoria", &str[1]);
printf("\n");
printf("%p e o valor do endereco de memoria", &str[5]);
printf("\n");
printf("%d e o valor do codigo ascii", str[1]);
printf("\n");
printf("%d e o valor do codigo ascii", str[5]);
printf("\n");
printf("%d e o valor do codigo ascii da variavel n que corresponde ao a.", n);
printf("\n");

printf("Prima alguma tecla para sair.");
getch();
return 0;

}