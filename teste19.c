#include <stdio.h>
#include <conio.h>

int main(){
int n = 45;
int* ponteiro=&n; //ponteiro pode ser *ptr, * ptr
char pl[] = "cotato";
char ko[] = "potato";
printf("%d e o valor de n.", n);
printf("\n");
printf("%p e o endereço de n.", &n);
printf("\n");
printf("%s e a palavra, o seu endereco de memoria e %p.", &pl, pl);
printf("\n");
printf("%p", &pl);
printf("\n");
printf("%s e a palavra, o seu endereco de memoria e %p.", &ko, &ko);
printf("\n");
printf("%p", &ko);
printf("\n");

printf("%p e o valor do ponteiro.", ponteiro);
printf("\n");
printf("%d e o valor da variável a partir do endereço de memoria.",*ponteiro);

printf("\n");
printf("Press any key to exit.");
getch();
return 0;
}