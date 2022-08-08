#include <iostream>
using namespace std;

class Carros
{
public:
    string marca, modelo, cor;
    int ano;
    double cilindrada;

    Carros(string marca, string modelo, int ano, string cor, double cilindrada)
    {
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;
        this->cor = cor;
        this->cilindrada = cilindrada;
    }
    void CarrostoString()
    {
        cout << "Marca: " + marca + "\nModelo: " + modelo + "\nAno: " + to_string(ano) + "\nCor: " + cor + "\nCilindrada: " + to_string(cilindrada);

    }
};

int main()
{
    Carros Ferrari("Ferrari", "F40", 2019, "Vermelho", 4.0);
    Carros Bugatti("Bugatti", "Veyron", 2020, "Vermelho", 1.0);
    Carros Mercedes("Mercedes", "SLS", 2019, "Azul", 6.0);


    cout << Ferrari.ano << "\n";
    cout << Bugatti.ano;
    Mercedes.CarrostoString();



}

