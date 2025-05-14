#include <iostream>
using namespace std;

// Definindo a union
union EnderecoIP {
    unsigned int enderecoCompleto;  // 32 bits
    unsigned char octetos[4];       // 4 x 8 bits
};

int main() {
    EnderecoIP ip;

    // Atribuindo valores aos octetos individualmente (por ordem: octeto[0] é o menos significativo)
    ip.octetos[0] = 192;
    ip.octetos[1] = 168;
    ip.octetos[2] = 1;
    ip.octetos[3] = 10;

    // Mostrando o valor inteiro em hexadecimal (padrão de IPs em redes)
    cout << "Endereco completo em hexadecimal: 0x" << hex << ip.enderecoCompleto << dec << endl;

    // Agora, atribuindo um valor inteiro diretamente
    ip.enderecoCompleto = 0xC0A8010A; // que é 192.168.1.10 em hexadecimal

    // Mostrando os octetos
    cout << "Octetos apos atribuir inteiro:" << endl;
    cout << (int)ip.octetos[3] << "." << (int)ip.octetos[2] << "." << (int)ip.octetos[1] << "." << (int)ip.octetos[0] << endl;

    return 0;
}
