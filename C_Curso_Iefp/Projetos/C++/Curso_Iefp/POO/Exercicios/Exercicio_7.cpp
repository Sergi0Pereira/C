#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class salario{
    public:
    string nome;
    int anoNasc;
    double irs,ss,vencimento,liquido;
    void hello();

    void calcula(){
        cout << "Insira aqui o seu vencimento, por favor:\n ";
        cin >> vencimento;
        irs=0.05*vencimento;
        ss=0.11*vencimento;
        liquido=vencimento-(irs+ss);

        cout << "O seu salário líquido é de: " << liquido;
    };
};
 void hello(){
    cout<< "Hello There!\n";
 }
int main(){
    salario Sergio;
    int ct = 0;


        hello();
        cout << "Insira o seu nome: ";
        std::getline(std::cin, Sergio.nome);
        fflush(stdin); // limpa o buffer do teclado e do buffer de saida de dados

        cout << "Insira o seu ano de nascimento: ";
        cin >> Sergio.anoNasc;
        fflush(stdin);

        hello();
        cout << "O seu nome e: " << Sergio.nome << "\n";
        cout << "Nasceu no ano de " << Sergio.anoNasc << " e tem neste momento \n";
   
        
        Sergio.calcula();
        
    }