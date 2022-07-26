#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class aluno{
    public:
    string nome;
    double teste,trabalho,media;

    void inserirNome(){
        cout << "Insira o seu nome: ";
        std::getline(std::cin, nome);
        fflush(stdin); // limpa o buffer do teclado e do buffer de saida de dados
    };
    void notasMedia(){
        cout << "Insira o seu teste: ";
        cin >> teste;
        fflush(stdin);
        cout << "Insira o seu trabalho: ";
        cin >> trabalho;
        fflush(stdin);
        media = (teste + trabalho) / 2;
        cout << nome << " a sua média é de: " << media << "\n";
    };
};
