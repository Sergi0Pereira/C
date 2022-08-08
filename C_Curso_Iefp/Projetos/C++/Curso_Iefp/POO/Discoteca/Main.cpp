#include <iostream>
#include <string>
#include <locale.h>
#include <fstream>
#include <iomanip>
#include "discoteca.h"

using namespace std;

int main(){

    Discoteca discoteca;
    discoteca.numeracaocartao();
    cout << discoteca.cartaoId << endl;

    cout << discoteca.contadorCartao << endl;
    discoteca.numeracaocartao();
    cout << discoteca.cartaoId << endl;
    cout << discoteca.contadorCartao << endl;
    discoteca.imprimirCartoesIds();

    
}