#include<iostream>
#include<string.h>
using namespace std;

struct Livro // Criei um struct de livro
{
    string titulo;
    string autor;
    int data_publ;
};

int main(){ //código principal
    Livro romance;
    romance.titulo = "Frankestein";
    romance.autor = "Mary Shelley";
    romance.data_publ = 1818;

    Livro longadata;
    longadata.titulo = "Imperfeitos";
    longadata.autor = "CHRISTINA LAUREN";
    longadata.data_publ = 2022;

    cout<< "Romance: " << romance.titulo << ", "<< romance.autor<< ", "<< romance.data_publ<<endl; //Exemplo 1
    cout<< "Longa Data: " << longadata.titulo << ", "<< longadata.autor<< ", "<< longadata.data_publ<<endl; //Exemplo 2
}