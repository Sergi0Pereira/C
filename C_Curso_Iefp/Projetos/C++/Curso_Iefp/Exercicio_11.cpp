#include <iostream>

using namespace std;

int main()
{

    int idade;

    cout << "Insira a sua idade:";

    cin >> idade;

    try
    {

        if (idade >= 18)
        {

            cout << "Pode aceder ao site";
        }
        else
        {

            throw(idade);
        }
    }
    catch (int idade)
    {

        cout << "Acesso negado a menores de idade.";

        cout << "Idade corrente: " << idade << " anos.";
    }
}