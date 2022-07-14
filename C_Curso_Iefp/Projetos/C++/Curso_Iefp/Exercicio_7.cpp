#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt"); // Para usar acentos.
    string nome;
    cout << "Digite seu nome: ";
    getline(cin, nome); // getline() para pegar o nome com espaços.
    cout << "Nome: " << nome << endl;
    return 0;
}