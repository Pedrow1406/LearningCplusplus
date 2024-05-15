#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string anime = "Bleach";
    string *ptanime;
    ptanime = &anime; // atribuindo o endereço de memoria da variavel anime pro ponteiro de anime;
    cout << ptanime << endl; // Endereço de memoria da variavel anime.
    cout << *ptanime << endl; // valor da variavel anime na variavel ptanime.
    *ptanime = "Berserk"; // Alterando o valor de *ptanime mas o anime vai ser alterado também porque eles estão referenciado o mesmo local de memoria
    cout << anime << endl; // anime também tem o valor alterado
    return 0;
}