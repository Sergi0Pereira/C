#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    try{
    string idade;
    int num;
     
    cout << "Insira a sua idade:";

    getline(cin,idade);
    num=stoi(idade);

        if (num>0){
            cout << "Idade valida";
        }
        else{
            throw(404);
        }
    }

    catch (...)
    {

        cout << "Entrada Invalida";
    }
}