#include <iostream>
#include <locale.h>

#include <string> // Contem funcoes para manipular strings.
// nao e obrigatorio incluir string pois ja esta incluido no c++.
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt"); // Para usar acentos.
    string nome, apelido, todo, ola = "Ola ";

    cout << "Qual e o seu nome?\n";
    cin >> nome;

    cout << "Qual e o seu apelido?\n";
    cin >> apelido;

    todo=nome.append(" ").append(apelido); // Concatenando strings. append() adiciona a string ao final da outra.
    //todo = nome + " " + apelido;

    cout << ola << todo << "!" << endl;
    
    return 0;
}