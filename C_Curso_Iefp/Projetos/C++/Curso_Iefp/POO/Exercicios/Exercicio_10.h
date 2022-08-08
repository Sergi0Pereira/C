#include <iostream>
#include <string>
#include <locale.h>
#include <fstream>
 #include <iomanip>
using namespace std;

double precoFinal()
{
    cout << "Quantos produtos quer inserir? ";

    int quantidade, iva;
    double preco, ivaSeis = 0.06, ivaTreze = 0.13, ivaVinteTres = 0.23, precoFinal;   /* Váriaveis necessárias para calculo do preço final */
    string percentagem="%";

    fstream precoFinalFicheiro;                                                      /* Váriavel necessária para abrir o ficheiro */
   
    precoFinalFicheiro.open("precoFinal.txt", ios_base::app);                        /* Abrir o ficheiro para escrita */
    cin >> quantidade;

    for (int i = 0; i < quantidade; i++)                                              /* Loop para percorrer a quantidade de produtos */
    {
        cout << "Digite o preço do produto: ";

        cin >> preco;

        precoFinalFicheiro << "Preço do produto:" << preco << "\n";                  /* Escreve no ficheiro o preço do produto */
        

        do /* Loop para verificar se o iva é válido*/
        {
            cout << "Qual o iva a ser aplicado?(6,13 ou 23) ";

            cin >> iva;

            

            switch (iva)                                                                /* Switch para verificar qual o iva a ser aplicado */
            {

            case 6:
                ivaSeis = preco * ivaSeis;
                precoFinal = preco + ivaSeis;                                         
                break;
            case 13:
                ivaTreze = preco * ivaTreze;
                precoFinal = preco + ivaTreze;                                        
                break;
            case 23:
                ivaVinteTres = preco * ivaVinteTres;                                  
                precoFinal = preco + ivaVinteTres;
                break;
            default:
                cout << "Iva inválido" << endl;                                      
                break;
            }
        } while (iva != 6 && iva != 13 && iva != 23);                                /* Loop para verificar se o iva é válido */
        precoFinalFicheiro << "Iva a ser aplicado: " << iva << percentagem<<"\n";    /* Escreve no ficheiro o iva a ser aplicado */

        if (iva == 6 || iva == 13 || iva == 23)
        {
            cout << "O preço final do produto é: " << precoFinal << endl; 

            precoFinalFicheiro << "O preço final do produto é: " << 
            precoFinal << "\n" << endl;                                             /* Escreve no ficheiro o preço final do produto */

        }
    }
    precoFinalFicheiro.close();                                                      /* Fecha o ficheiro */
    return precoFinal;

};

void impressaoPrecos(){
    string linha;
    ifstream ficheiro("precoFinal.txt");
    cout << "\n\n";
    while (getline(ficheiro, linha))                                                  // enquanto houver linhas na stream
  
    {
        cout << linha << endl;
    }
}