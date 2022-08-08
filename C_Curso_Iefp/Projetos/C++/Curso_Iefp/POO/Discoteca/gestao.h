#include <iostream>
#include <string>
#include <locale.h>
#include <fstream>
#include <vector>
#include "cartoes.h"
#include "produtos.h"
#include <unordered_map>
using namespace std;

class gestao : public cartao,produtos
{
    string resposta;
     unordered_map<int,int> registoProdutos;
    void consumos()
    {
        gestao g1;
       
        cout << "Introduza o numero do cartao no qual pretende registar o(s) produto(s): ";
        cin >> g1.cartaoId;
        g1.setCartaoId(g1.cartaoId);
        do
        {
            cout << "Adicione aqui o codigo do seu produto";
            cin >> resposta;
            g1.registoProdutos
            
        }
    }
};
