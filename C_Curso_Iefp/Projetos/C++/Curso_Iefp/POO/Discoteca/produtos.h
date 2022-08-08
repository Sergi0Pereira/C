#include <iostream>
#include <string>
#include <locale.h>
#include <fstream>
#include <vector>
using namespace std;

class produtos
{

    string Produtos[10];

    string variaveisProdutos[3];

    int consumo;

    int Quantidade = 0;

    // Getters
    string getProdutos()
    {
        return Produtos[10];
    }

    string getVariaveisProdutos()
    {
        return variaveisProdutos[3];
    }
    int getConsumo(){
        
    }

    //Setters

    void setProdutos(string Produtos)
    {
        this->Produtos[10] = Produtos;
    }
    void setVariaveisProdutos(string variaveisProdutos)
    {
        this->variaveisProdutos[3] = variaveisProdutos;
    }

    void setContadorQuantidade(int contadorQuantidade)
    {
        this->Quantidade = contadorQuantidade;
    }

    void iniciarListaProdutos()
    {
        Produtos[0] = "1 - Valor Entrada";
        Produtos[1] = "2 - Coca-Cola";
        Produtos[2] = "3 - 7UP";
        Produtos[3] = "4 - Agua";
        Produtos[4] = "5 - Vodka";
        Produtos[5] = "6 - Whiskey"; // Escreve uma função que inicie a lista de produtos, supondo que existem 10 produtos;
        Produtos[6] = "7 - Rum";
        Produtos[7] = "8 - Safari";
        Produtos[8] = "9 - Cerveja";
        Produtos[9] = "10 - Agua com Gas";
    }
    void exp(){
        int x= 
    }
};