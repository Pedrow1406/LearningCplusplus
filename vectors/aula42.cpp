#include <iostream>
#include <vector>
#include <string>

using namespace std;

void setName(vector<string> &vec, string nome){
    vec.push_back(nome);
}
int main(int argc, char const *argv[])
{
    vector<string> nomes;
    nomes.push_back("Pedrow");
    setName(nomes, "Mauricio");
    nomes.push_back("Maria");
    setName(nomes, "Joana");
    
    cout  << "Primeiro elemento: " << nomes.front() << endl;
    cout << "Ultimo elemento: " << nomes.back() << endl; 

    nomes.insert(nomes.end() - 1, "Anonimato"); // Adiciona um valor na posição passada no caso é a penultima 
    nomes.erase(nomes.begin() + 2); // Remove o item de indice 2; 

    for (size_t i = 0; i < nomes.size(); i++)
    {
        cout << i+1 << "- " << nomes[i] << endl;
    }

    cout << "-------------------" << endl;

    for (auto &&nome : nomes)
    {
        cout << nome << endl;
    }
    cout << "-------------------" << endl;

    nomes.clear(); // Remove todos os itens da lista (da um clear)

    if (nomes.empty()){
        cout << "A lista de nomes esta vazia" << endl;
    } else {
        cout << "A lista de nomes NAO esta vazia" << endl;
    }
    return 0;
}