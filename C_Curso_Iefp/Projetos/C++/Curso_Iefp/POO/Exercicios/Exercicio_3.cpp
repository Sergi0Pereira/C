#include <iostream>
using namespace std;

class Pessoa
{
    // Variaveis Publicas
    public:
    string nome;
    int idade;
    void cumprimenta();

    //Variaveis Privadas
    private:
    int ano;

    // Methods
    public:
    void  Pessoa::cumprimenta(){ // 
        cout << "Olá, meu nome é " << nome << " e tenho " << idade << " anos." << endl;
    }
    setAno(int ano)
    {
        return this->ano = ano;
    }
     getAno()
    {
        return ano;
    }
};


int main(){
    Pessoa maria;
    maria.nome = "Maria";
    maria.idade = 20;
    maria.setAno(2019);

    cout << maria.nome << endl;
    cout << maria.idade << endl;
    cout << maria.getAno() << endl;
    maria.cumprimenta();
    return 0;
}