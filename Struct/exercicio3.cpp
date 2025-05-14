#include <iostream>
#include <string>
using namespace std;


struct Aluno {
    string nome;
    int matricula;
};

int main() {
    Aluno alunos[3]; // array de structs

    // Coletando dados dos alunos
    for (int i = 0; i < 3; i++) {
        cout << "Digite o nome do aluno " << i+1 << ": ";
        getline(cin, alunos[i].nome);

        cout << "Digite a matrícula do aluno " << i+1 << ": ";
        cin >> alunos[i].matricula;
        cin.ignore(); // limpa o buffer após ler número para evitar problema no getline
    }

    // Exibindo os dados dos alunos
    cout << "\nLista de alunos:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Nome: " << alunos[i].nome << ", Matricula: " << alunos[i].matricula << endl;
    }

    return 0;
}
