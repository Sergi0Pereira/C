#include <iostream>
#include <string>
#include <locale.h>
#include <fstream>
using namespace std;

class Aluno
{
public:
    string nAlunos;
    string turma;
    int i;
    int numAlunos=1;
    int linhas=1;
    string linha;
    string continuar;
    fstream nomeAlunos;
    fstream turma;

    void nomeAlunos()
    {
  
        cout << "Quantos alunos pretende inserir?\n";

        cin >> i;

        nomeAlunos.open("nomeAlunos.txt", ios_base::in);
        int linhas = contarLinhas();
        nomeAlunos.close();
        nomeAlunos.open("nomeAlunos.txt", ios_base::app);
        for (int x = 0; x < i; x++)
        {

            nomeAlunos << "Num:" << linhas << "  ";

            cout << "Insira aqui o nomeAlunos do aluno(Enter para sair)\n";
            cin >> nAlunos;
            nomeAlunos << "NomeAlunos:" << nomeAlunos << "  ";
            fflush(stdin);

           
            cout << "Deseja Continuar?";

            cin >> continuar;

            linhas++;
            
            continuar = toupper(continuar[0]);
            if (continuar != "S")
            {
                nomeAlunos.close();
                exit(0);
            }

        }
        nomeAlunos.close();
        
    }

    int contarLinhas()
    {
        while (getline(nomeAlunos, linha))
        { 
            numAlunos++;
        }
        nomeAlunos.close();
        return numAlunos++;
    }

    void turmas(){
        cout << "Quantos turmas pretende inserir?\n";

        cin >> i;

        turma.open("turmas.txt", ios_base::app);
        for (int x = 0; x < i; x++)
        {
            cout << "Insira aqui a turma\n";
            cin >> turma;
            turma << "Turma:" << turma << "  \n";
            fflush(stdin);

            cout << "Deseja Continuar?";

            cin >> continuar;

          
            continuar = toupper(continuar[0]);
            if (continuar != "S")
            {
                nomeAlunos.close();
                exit(0);
            }
        }
        nomeAlunos.close();
    }
};