#include <iostream>
using namespace std;

int main()
{
    int dias, horas, minutos, segundos;
    string resp;

    do
    {
        cin.clear();
        do
        {

            cout << "Insira o numero de dias:";
            cin >> dias;

            try
            {

                if (dias <= 0)
                {
                    throw(dias);
                }
                else
                {
                    horas = dias * 24;

                    if (horas > 10)
                    {
                        cout << "Horas:" << horas << endl;
                    }
                    if (horas < 10)
                    {
                        cout << "Horas: 0" << horas << endl;
                    }

                    minutos = dias * 24 * 60;
                    
                    if (minutos > 10)
                    {
                        cout << "Minutos: " << minutos << endl;
                    }
                    if (minutos < 10)
                    {
                        cout << "Minutos: 0" << minutos << endl;
                    }
                    segundos = dias * 24 * 60 * 60;

                    if (segundos >= 10)
                    {
                        cout << "Segundos: " << segundos << endl;
                    }
                    if (segundos < 10)
                    {
                        cout << "Segundos: 0" << segundos << endl;
                    }
                }
            }
            catch (int dias)
            {
                
                cout << "Numero de dias invalido\n" << endl;
                
            }

        } while (dias <= 0);

        cout << "Deseja continuar? (S/N)";
        cin >> resp;

    } while (resp[0] == 's');
}