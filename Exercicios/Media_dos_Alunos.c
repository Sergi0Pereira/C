#include <stdio.h>

int main(){

	char nome[10];
	float nota1, nota2,nota3,media;

	// Entrada

	printf("Insira aqui o seu nome:\n ");

	gets(nome );//, sizeof(nome),stdin); // stdin = standard input (vai buscar o meu input referente ao nome com o limite da char)
		// o gets nao tem limite de char

		

	printf("Insira aqui a sua primeira nota: \n");
		scanf("%f",&nota1); 

	printf("Insira aqui a sua segunda nota: \n");

		scanf("%f",&nota2); 

	printf("Insira aqui a sua terceira nota: \n");

	scanf("%f",&nota3); 

	// processamento

	media=(nota1+nota2+nota3)/3;

	// SAIDA

	printf("O seu nome e %s e a sua media e de %f.", nome,media);

    return 0;

}