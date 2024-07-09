#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Pessoa pessoa1;
    Pessoa pessoa2;
    Funcionario funcionario;

    pessoa1.setNome("Pedrow");
    pessoa1.setIdade(19);

    pessoa2.setNome("Maria");
    pessoa2.setIdade(36);
    
    cout << "Nome da Pessoa 1: " << pessoa1.getNome() << endl;
    cout << "Idade da Pessoa 1: " << pessoa1.getIdade() << " anos" << endl;
    
    cout << "------------------------------" << endl;

    cout << "Nome da Pessoa 2: " << pessoa2.getNome() << endl;
    cout << "Idade da Pessoa 2: " << pessoa2.getIdade() << " anos" << endl;

    cout << "------------------------------" << endl;

    funcionario.setNome("Pedrow Melo");
    funcionario.setSalario(14830.10f);
    cout << funcionario.getNome() << " ganha R$" << funcionario.getSalario() << " por mes." << endl; 
    return 0;
}