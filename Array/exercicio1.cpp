#include<iostream>
using namespace std;

int main (){
    int tamanho_arrey;
    float temperatura;
    cout<<"Digite o tamanho do arrey:";
    cin>> tamanho_arrey;    
    
    int* arrey = new int[tamanho_arrey];
    for (int i =0; i< tamanho_arrey; i++){
        cout<<"Digite a temperatura:";
        cin>> temperatura;
        arrey[i] = temperatura;
    }
    cout<<"Imprimir na tela o arrey de temperaturas:"<< endl;
    for (int i = 0; i < tamanho_arrey; i++){
        cout<< arrey[i]<< endl;
    }
    delete[] arrey;
    return 0;
}