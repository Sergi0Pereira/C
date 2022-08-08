#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string linha;
    string nome;

    fstream ficheiro;                                                    // cria um objeto do tipo fstream 
    ficheiro.open("ficheiro1.txt", std::ios_base::app); 

    if (ficheiro.is_open())
    {
        cout << "Insira o seu nome:";
        cin>> nome;  
        ficheiro.write(nome.data(), nome.size());
        ficheiro.write("\n", 1);
        ficheiro.close();
    }
    else
    {
        cout << "Erro";
        ficheiro.close();
    }
    ifstream ficheiro2("ficheiro1.txt"); 

    while (getline(ficheiro2, linha))
    {
        cout << linha << endl;
    }
    
}