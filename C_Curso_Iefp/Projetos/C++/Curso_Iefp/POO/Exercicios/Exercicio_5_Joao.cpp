#include <iostream>
#include <string>
#include <locale.h>


using namespace std;

class pessoa{
    public:
        int anoNasc;
        string nome;
        void hello();
        int calcIdade(int ano);

        // pessoa(int a, string b){
        //     anoNasc = a;
        //     nome = b;
};


int pessoa::calcIdade(int ano){
    int idd = 2022-ano;
    return idd;
}

void hello(){
    cout<<"Hello there!\n";
}

int main(){
pessoa grupo[3];
int ct=0;

while(ct<3){
    hello();
    cout<<"Insira o seu nome: ";
    std::getline(std::cin,grupo[ct].nome);
    fflush(stdin); // limpa o buffer do teclado e do buffer de saida de dados

    cout<<"Insira o seu ano de nascimento: ";
    cin>>grupo[ct].anoNasc;
    fflush(stdin);
    
    cout<<"O seu nome e: "<<grupo[ct].nome<<"\n";
    cout<<"Nasceu no ano de "<<grupo[ct].anoNasc<<" e tem neste momento "<<grupo[ct].calcIdade(grupo[ct].anoNasc)<<" anos.\n";
    ct++;
}



}