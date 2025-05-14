#include<iostream>
#include<string>

using namespace std;
//Definição do enumerador:
enum TipoValor{
    TIPO_INT,
    TIPO_DOUBLE,
    TIPO_CHAR,
    TIPO_INDEFINE,
    TIPO_FLOAT
};

//Definição do Union:
union ValorUnion
{
    int i;
    double d;
    char c;
    float f;
};
//Struct que contém a union e a tag:
struct Valor
{
    ValorUnion dado;
    TipoValor tipo = TIPO_INDEFINE;
    //Funções para definir valores:
    void definirInt(int valor){
        dado.i = valor;
        tipo = TIPO_INT;
    }
    void definirDouble(double valor){
        dado.d = valor;
        tipo = TIPO_DOUBLE;    
    }
    void definirChar(char valor){
        dado.c = valor;
        tipo = TIPO_CHAR;
    }
    void definirFloat(float valor){
        dado.f = valor;
        tipo = TIPO_FLOAT;
    }
    //Função para obter o valor da forma segura.
    void mostrarvalor() const{
        switch (tipo)
        {
        case TIPO_INT:
            cout<< "Valor int: "<< dado.i << endl;
            break;
        case TIPO_DOUBLE:
            cout<< "Valor double: "<< dado.d<< endl;
            break;
        case TIPO_FLOAT:
            cout<< "Valor float: "<< dado.f<< endl;
            break;
        case TIPO_CHAR:
            cout<< "Valor char: "<< dado.c<< endl;
            break;
        default:
            cout<< "Nenhum valor definido."<<endl;
        }
    }
    

};

int main(){
    Valor v;
    //Define Inteiro;
    v.definirInt(42);
    v.mostrarvalor();
    //Define Char;
    v.definirChar('S');
    v.mostrarvalor();
    //Define Float;
    v.definirFloat(5.87);
    v.mostrarvalor();
    //Define Double;
    v.definirDouble(3.845);
    v.mostrarvalor();

    return 0;
}