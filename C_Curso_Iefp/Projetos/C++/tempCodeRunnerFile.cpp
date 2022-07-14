//#write a program that converts kilograms in pounds and vice versa with management of errors
#include <iostream>
using namespace std;
 int main{
        float kg, lb;
        string op;
        char o;
        cout << "Insira uma massa:";
        cin >> kg;
        do{
            cout << "Deseja converter para quilogramas ou para libras? (K/L)";
            cin >> op;
            o = tolower(op[0]);
        }while(o != 'k' && o != 'l');
        switch(o){
            case 'k':
                lb = kg * 2.2046;
                cout << "Massa em libras: " << lb << endl;
                break;
            case 'l':
                kg = lb / 2.2046;
                cout << "Massa em quilogramas: " << kg << endl;
                break;
        }
        return 0;


 }