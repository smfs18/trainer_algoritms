#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

int main(){
    vector<char> palavra_invertida;
    char palavra[11]; // espaço para 10 letras + '\0'
    cout << "Digite a palavra de até 10 letras: ";
    cin >> palavra;

    int tamanho = strlen(palavra);

    // Inverte corretamente
    for (int i = tamanho - 1; i >= 0; i--){
        palavra_invertida.push_back(palavra[i]);
    }

    cout << "Palavra original: " << palavra << endl;
    cout << "Palavra invertida: ";
    for (char c : palavra_invertida){
        cout << c;
    }
    cout << endl;
}
