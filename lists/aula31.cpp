#include <iostream>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> idades;
    idades.push_back(17);
    idades.push_back(12);
    idades.push_back(27);
    idades.push_back(21);

    cout << "A list idades tem " << idades.size() << " elementos." << endl;
    cout << "------------------------" << endl;
    cout << "I D A D E S" << endl;

    list<int>::iterator it;
    it = idades.begin();


    // ORDENANDO A LISTA EM ORDEM CRESCENTE
    cout << "---------------------" << endl;
    idades.sort();
    cout << "L I S T A  O R D E N A D A" << endl;
    for (it = idades.begin(); it != idades.end(); it++){
        cout << *it << " ";
    }
    cout << endl;


    // ORDENANDO A LISTA EM ORDEM DECRESCENTE
    cout << "---------------------" << endl;
    cout << "L I S T A  I N V E R T I D A" << endl;
    idades.reverse();
    for (it = idades.begin(); it != idades.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << endl;
    
      
    // INSERINDO ELEMENTO EM POSICAO X
    advance(it, 2); // fazendo o iterator ir do begin ate a posição 2
    idades.insert(it,999); // Adicionando 999 na posição do iterator como eu usei o iterator apartir do begin eu avancei 2 a posição q vai ser inserida é 2

    // PERCORRENDO A LISTA DELETANDO O ELEMENTO
    cout << "---------------------" << endl;
    cout << "L I S T A  E M  O R D E M  D E  I N S E R C A O" << endl;
    for (auto &&idade : idades)
    {
        cout << idades.front() << endl;
        idades.pop_front();
    }
    cout << "------------------------" << endl;

    cout << "A list idades tem " << idades.size() << " elementos." << endl;
    if(idades.empty()){
        cout << "A lista de idades esta vazia.";
    } else{
        cout << "A lista de idades NAO esta vazia.";
    }
    
    return 0;
}