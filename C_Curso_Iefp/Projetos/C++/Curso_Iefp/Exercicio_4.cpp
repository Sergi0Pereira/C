#include <iostream>
using namespace std;

int main()
{
    int x, y, soma;
    cout << "Digite o primeiro numero: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;
    soma = x + y;
    cout << "A soma de " << x << " e " << y << " e de: " << soma << "."<< endl;

    int* pntX = &x;
    int* pntY = &y; // * serve para declarar um ponteiro de um tipo qualquer. & para obter o endereco de memoria de x e y.
    cout << "O endereco de x e: " << pntX << endl; // endereco de memoria de x.
    cout << "O endereco de y e: " << pntY << endl; // endereco de memoria de y.
    cout << "O valor de x e: " << *pntX << endl; // * serve para acessar o valor de x(Diferenciar).
    cout << "O valor de y e: " << *pntY << endl; // * serve para acessar o valor de y(Diferenciar).

    *pntX=6;
    cout << "O valor de x e: " << *pntX << endl; // * Alterando o valor do ponteiro de x tambem altera o valor de x.
    cout << x << endl; // x passa a ter o valor 6.
    return 0;
}