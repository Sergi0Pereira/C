#include <iostream>
#include <string>
#include <locale.h>
#include "./Exercicio_9.h"

using namespace std;

int main(){
    string nome;
    double testes, trabalhos, media;
    aluno novo;
    nome=novo.inserirNome();
    testes=novo.notaTeste();
    trabalhos=novo.notaTrabalho();
    media=novo.Media();
    novo.escreve();


    return 0;

    
}