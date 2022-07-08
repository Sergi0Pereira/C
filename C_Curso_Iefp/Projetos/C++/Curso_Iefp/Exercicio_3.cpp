#include <iostream>
using namespace std;

int main()
{
    int ano = 2022, mes = 12, dia = 31;
    double b = 3.14;
    char c = 'a';
    string d = "Ola Mundo!";
    bool e = true;
    const int f = 10; // Constante.. valor que nao pode ser alterado
    // f=20; Nao pode alterar o valor de uma constante
    cout << ano << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << "Ano:" << ano << " Mes:" << mes << " Dia:" << dia << endl;

    return 0;
}