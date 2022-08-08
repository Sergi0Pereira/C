#include <iostream>

using namespace std;

int main()
{
    double celsius, fahrenheit;

    do
    {
        cout << "Digite a temperatura em Celsius: ";

        try
        {
            cin >> celsius;
            if (celsius < -273.15) // 
            {
                throw celsius;// throw para lançar a temperatura. Onde o código vai para o catch.
            }
        }

        catch (...)
        {
            cout << "Erro: "  << "Celsius nao é uma temperatura valida.\n";

            
           
        }

    } while (celsius < -273.15);

    fahrenheit = (9 * celsius / 5) + 32;

    cout << "Temperatura em Fahrenheit: " << fahrenheit << endl;

    return 0;
}