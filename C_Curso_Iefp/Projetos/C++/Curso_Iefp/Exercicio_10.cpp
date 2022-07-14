#include <iostream>
using namespace std;

int main()
{
    double peso, altura, imc;

    do
    {
        cout << "Insira o seu peso:";
        cin >> peso;
        try
        {
            if (peso < 0)
            {
                throw peso;
            }
        }
        catch (...)
        {
            cout << "Erro: "
                 << "Peso inferior a zero.\n";
        }
    } while (peso < 0);
    do
    {
        cout << "Insira a sua altura:";
        cin >> altura;
        try
        {
            if (altura < 0)
            {
                throw altura;
            }
        }
        catch (...)
        {
            cout << "Erro: "
                 << "Altura nao valida.\n";
        }
    } while (altura < 0);

    imc = peso / (altura * altura);

    cout << "O seu IMC e de: " << imc << endl;

    if (imc < 18.5)
    {
        cout << "Classificacao: Magreza\n";
    }
    else if (imc < 25)
    {
        cout << "Classificacao: Saudavel\n";
    }
    else if (imc < 30)
    {
        cout << "Classificacao: Sobrepeso\n";
    }
    else if (imc < 35)
    {
        cout << "Classificacao: Obesidade Grau I\n";
    }
    else if (imc < 40)
    {
        cout << "Classificacao: Obesidade Grau II\n";
    }
    else
    {
        cout << "Classificacao: Obesidade Grau III\n";
    };
}
