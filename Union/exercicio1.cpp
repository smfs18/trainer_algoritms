#include <iostream>
using namespace std;

// Definindo a union
union Valor {
    int i;
    double d;
    char c;
};

int main() {
    Valor v;

    // Atribuindo valor inteiro
    v.i = 42;
    cout << "Valor inteiro: " << v.i << endl;

    // Atribuindo valor double
    v.d = 3.14;
    cout << "Valor double: " << v.d << endl;

    // Tentando imprimir o valor inteiro após sobrescrever com double
    cout << "Tentando acessar o valor inteiro após atribuir double: " << v.i << endl;
    return 0;
}
