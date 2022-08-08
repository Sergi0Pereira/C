#include <iostream>
using namespace std;
#include <list>
#include <string>

class Pessoa
{
    // Variaveis Publicas
public:
    string nome;
    int anoNascimento;
    int idade;

    // void cumprimenta();
    // int idade(int i);

    // Methods

public:
    void cumprimenta()
    { //
        cout << "Olá, meu nome é " << nome << " e tenho " << idades(anoNascimento) << " anos." << endl;
    }

    int idades(int anoNascimento)
    {
        int idadeF;
        idadeF = 2020 - anoNascimento;
        return idadeF;
    }
    void inserçao()
    {
        int i=0, x=2;
        while (i <= x)
        {
            Pessoa pessoas[i];
            cout << "Digite o nome: ";

            getline(std::cin,pessoas[i].nome);
            fflush(stdin);

            cout << "Digite o ano de nascimento: ";

            cin >> pessoas[i].anoNascimento;
            fflush(stdin);
    

            cout << "A sua idade é de:" << pessoas[i].idades(pessoas[i].anoNascimento) << endl;
       
            pessoas[i].cumprimenta();
            i++;
        }
    }
};

int main()
{
    Pessoa ins;
    ins.inserçao();

    return 0;
}