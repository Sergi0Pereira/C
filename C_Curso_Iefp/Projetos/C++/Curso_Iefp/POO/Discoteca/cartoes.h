#include <iostream>
#include <string>
#include <locale.h>
#include <fstream>
#include <vector>
using namespace std;

class cartao{
    public:
    int cartaoIdArreio[599];

    int cartaoId ;

    int contadorCartao = 0;

    std::vector<int> presencas;
    std::vector<int> consumos();

    // Getters

    int getCartaoId()
    {
        return cartaoId;
    }

    int getContadorCartao()
    {
        return contadorCartao;
    }

    vector<int> getPresencas()
    {
        return presencas;
    }

    // Setters
    void setCartaoId(int cartaoId)
    {
        this->cartaoId = cartaoId;
        cartaoId++;
    }

    void setContadorCartao(int contadorCartao)
    {
        this->contadorCartao = contadorCartao;
    }

    void setPresencas(vector<int> presencasVector)
    {
        this->presencas = presencasVector;
    }


    //Metodos

    int numeroCartao(int numCartao)
    {
        cartaoId = numCartao; // escreve uma funcao com o nome de numeroCartao que recebe um inteiro como parametro e retorna um inteiro
        return cartaoId;
    }

    void numeracaocartao()
    {

        cout << "Introduza o numero do cartao: ";
        cin >> cartaoId;
        setCartaoId(cartaoId);

        if (contadorCartao >= 599) // Escreve uma função que numere os cartões a partir de um número dado pelo utilizador supondo que serão necessários no máximo 600;
        {
            cout << "O Clube encontra-se cheio.";
        }
        else
        {
            registoPresencas();
        }
    }

    void imprimirCartoesIds()
    {
        int comprimentoVector;
        for (int x = 0; x < presencas.size(); x++)
        {
            cout << presencas[x] << "\n";
        }
    }

    // Escreve uma função para registar a entrada dos clientes;
    void registoPresencas()
    {
        presencas.push_back(cartaoId);
        contadorCartao++;
    }
};