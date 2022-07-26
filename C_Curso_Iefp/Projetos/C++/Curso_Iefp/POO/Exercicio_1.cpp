#include <iostream>
using namespace std;

class Carros
{
    public : 
    string marca,modelo,cor;
    int ano;
    double cilindrada;


    
};

int main()
{
    Carros Mercedes;
    Carros Bugatti;


    Mercedes.marca = "Mercedes";
    Mercedes.modelo = "SLS";
    Mercedes.ano = 2019;
    Mercedes.cor = "Azul";
    Mercedes.cilindrada = 6.0;

    cout << Mercedes.marca << endl;
    cout << Mercedes.modelo << endl;
    cout << Mercedes.ano << endl;
    cout << Mercedes.cor << endl;
    cout << Mercedes.cilindrada << endl;


    Bugatti.marca = "Bugatti";
    Bugatti.modelo = "Veyron";
    Bugatti.ano = 2019;
    Bugatti.cor = "Vermelho";
    Bugatti.cilindrada = 1.0;
    
    cout << Bugatti.marca << endl;
    cout << Bugatti.modelo << endl;
    cout << Bugatti.ano << endl;
    cout << Bugatti.cor << endl;
    cout << Bugatti.cilindrada << endl;


}