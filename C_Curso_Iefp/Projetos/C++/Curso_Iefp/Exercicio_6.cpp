#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt"); // Para usar acentos.
    int n;
    string s = "porto", palavra, palavraM;

    cout << "Palavra: ";
    cin >> palavra;
    int tam = palavra.length();

    for (int i = 0; i < palavra.size(); i++) //
    {
        n++;
    }
    // colocar palavra em maiuscula atras do ascii
    /*  for (int i = 0; i < palavra.size(); i++)
      {
          if (palavra[i] >= 'a' && palavra[i] <= 'z')
          {
              palavra[i] = palavra[i] - 32;
          }
          }
      */

    for (int i = 0; i < palavra.size(); i++) //
    {
        palavraM += toupper(palavra[i]);
    }
    cout << "A primeira letra e: " << palavraM[0] << endl;   // Acessando a primeira letra.
    cout << "A ultima letra e: " << palavraM[n - 1] << endl; // Ciclo for.. n-1 pois o indice inicia em 0.
                                                             // cout << "A primeira letra e: " << palavra[tam - 1] << endl; // .length()..tam-1 pois o indice inicia em 0.
    cout << "A palavra " << palavraM << " tem " << n << " letras.\n";
    cout << "Aqui esta a palavra em minusculas: " << palavra << "\nAqui esta a palavra em maisuculas: " << palavraM;
    // cout << "A palavra " << palavra << " tem " << tam << " letras.";
    return 0;
}