#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class salario
{
public:
    string nome;
    int anoNasc;
    double irs, ss, vencimento, liquido;
    void hello();

    void calcula()
    {
        cout << "Insira aqui o seu vencimento, por favor:\n ";
        cin >> vencimento;
        irs = 0.05 * vencimento;
        ss = 0.11 * vencimento;
        liquido = vencimento - (irs + ss);

        cout << "O seu salário líquido é de: " << liquido;
    };
};

class salarioT : public salario
{
public:
    int grauIncapacitacao = 60;
    double irsDef;
    double ssDef;
    void calculaT()
    {
        cout << "Insira aqui o seu vencimento, por favor:\n ";
        cin >> vencimento;
        irsDef = 0.02 * vencimento;
        ss = 0.05 * vencimento;
        liquido = vencimento - (irs + ss);

        cout << "O seu salário líquido é de: " << liquido;
    };
};

