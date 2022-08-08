#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class aluno
{
public:
    string nome;
    double teste, trabalho, media;

    string inserirNome()
    {
        cout << "Insira o seu nome: \n";
        std::getline(std::cin, nome);
        fflush(stdin); // limpa o buffer do teclado e do buffer de saida de dados
        return nome;
    };
    double notaTeste()
    {
        do
        {
            cout << "Insira a nota do teste:\n ";
            cin >> teste;
            if (teste < 0 || teste > 20)
            {
                cout << "Nota inválida, insira novamente: ";
            }
        } while (teste < 0 || teste > 20);
        return teste;
    };

    double notaTrabalho()
    {

        do
        {
            cout << "Insira a nota do seu trabalho:\n ";
            cin >> trabalho;
            if (teste < 0 || teste > 20)
            {
                cout << "Nota inválida, insira novamente: ";
            }
        } while (trabalho < 0 || trabalho > 20);

        fflush(stdin);
        return trabalho;
    };
    double Media()
    {
        media = (teste + trabalho) / 2;
        cout << nome << " a sua média é de: " << media << "\n";
        return media;
    };
    void escreve()
    {
        cout << "Nome: " << nome << "\n";
        cout << "Teste: " << teste << "\n";
        cout << "Trabalho: " << trabalho << "\n";
        cout << "Média: " << media << "\n";
    };
};
