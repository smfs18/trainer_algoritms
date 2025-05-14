#include<iostream>
using namespace std;

int main(){
    int* arrey = new int[5];
    int numero;
    float media;
    int soma = 0;
    for (int i = 0; i < 5; i++){
        cout<<"Digite um número inteiro:";
        cin>> numero;
        soma += numero;
        arrey[i] = numero;
    }
    media = soma / 5;
    cout<< "Esse é o arrey:";
    for (int j = 0; j < 5; j++){
        cout<< arrey[j]<< " ";
    }
    cout<<endl;
    cout<< soma<<endl;
    cout<< media;
    
    return 0;
}