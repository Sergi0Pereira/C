#include <iostream>
using namespace std;

/*You might see some C++ programs that runs without the standard namespace library. The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for string (and cout) objects:*/

int main()
{
    cout << "Hello World!\n";
    cout << "How are you doing?" << endl;
    // if don´t use (using namespace std) need to put std::cout << std::endl;
    cout << "Fine"; 

    // endl(Da um paragrafo) Write a newline and flush the stream. This manipulator is often mistakenly used when a simple newline is desired, leading to poor buffering performance.

    return 0; // Limpa o buffer de memória e fecha o programa.
}