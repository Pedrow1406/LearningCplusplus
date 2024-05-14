#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    // int
    int num1 = 10;
    int num2 = 25;
    int result = num1 + num2;
    // string
    string nome;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Seu nome e " + nome << endl;
    // bool
    bool vivo = true;
    // char
    char letra = 'P'; 
    // double
    double preco = 14.2;
    // array
    int numeros[3] = {2, 3, 5};
    
    cout << "A soma entre " + to_string(num1) + " e " + to_string(num2) + " e igual a " + to_string(result) << endl;

    int numerosLength = sizeof(numeros) / sizeof(numeros[0]);
    for (int i = 0; i < numerosLength; i++)
    {
        cout << to_string(numeros[i])  << " ";
    }
    cout << endl;
    for (int i : numeros)
    {   
        cout << i << " ";
    }


    return 0;
}
