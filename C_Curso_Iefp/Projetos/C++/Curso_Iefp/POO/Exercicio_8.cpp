#include <iostream>
#include <string>
#include <locale.h>
#include "classes.h"

using namespace std;


int main()
{
    salarioT Sergio;
    int ct = 0;

    
    cout << "Insira o seu nome: ";
    std::getline(std::cin, Sergio.nome);
    fflush(stdin); // limpa o buffer do teclado e do buffer de saida de dados

    cout << "Insira o seu ano de nascimento: ";
    cin >> Sergio.anoNasc;
    fflush(stdin);

    
    cout << "O seu nome e: " << Sergio.nome << "\n";
    cout << "Nasceu no ano de " << Sergio.anoNasc << " e tem neste momento tem"<< Sergio.grauIncapacitacao << "% de incapacidade.\n";

    Sergio.calculaT();
}