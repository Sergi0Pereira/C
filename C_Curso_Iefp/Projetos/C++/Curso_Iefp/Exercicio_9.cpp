#include <iostream>
using namespace std;

int main()
{

    double n1, fn; // número do input, output

    string op, otp; // opção do user, output final.

    char o, t; // 1º caracter da opção do user para o switch, Símbolo da temperatura do output

    do
    {

        cout << "Deseja converter para Celsius ou para Fahrenheit? (C/F)";

        cin >> op;

        o = tolower(op[0]);

    } while (o != 'c' && o != 'f');

    switch (o)
    {

    case 'c':
        do
        {
            cout << "Insira uma temperatura:";

            cin >> n1;
            try
            {

                if (n1 < -273.15) //
                {
                    throw n1; // throw para lançar a temperatura. Onde o código vai para o catch.
                }
            }
            catch (...)
            {
                cout << "Erro: "
                     << "temperatura nao valida.\n";
            }
        } while (n1 < -273.15);

        fn = (n1 - 32) * 5 / 9;

        otp = "Fahrenheit";

        t = 'C';

        break;

    case 'f':
        do
        {
            cout << "Insira uma temperatura:";

            cin >> n1;
            try
            {

                if (n1 < -459.67) //
                {
                    throw n1; // throw para lançar a temperatura. Onde o código vai para o catch.
                }
            }
            catch (...)
            {
                cout << "Erro: "
                     << "temperatura nao valida.\n";
            }
        } while (n1 < -459.67);

        fn = 9 / 5 * n1 + 32;

        otp = "Celsius";

        t = 'F';

        break;
    }

    cout << "A temperatura " << n1 << " em graus " << otp << " equivale a " << fn << " graus " << t << ".";
}