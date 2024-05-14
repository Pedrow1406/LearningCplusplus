#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    // lIFO (lAST IN, FIRST OUT)
    stack <string> cartas;
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Paus");
    cartas.push("Rei de Ouros");

    cout << "Tamanho da Stack: " << cartas.size() << endl;
    cout << "Elemento do topo da stack " << cartas.top() << endl; // Pega o elemento do topo da pilha
    
    cartas.pop(); // Remove o ultimo elemento( elemento do top) a ser inserido na pilha no padrão LIFO
    cout << "Tamanho da Stack: " << cartas.size() << endl;
    cout << "Elemento no topo da stack: " << cartas.top() << endl;

    if (cartas.empty()){
        cout << "A stack de cartas esta vazia!";
    } else{
        cout << "A stack de cartas NAO esta vazia e tem " << cartas.size() << " elementos.";
    }

    return 0;
}