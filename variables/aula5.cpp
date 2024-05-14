#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{   
    // #Define
    #define pi 3.1415 // Vai trocar todas as ocorrencias da  palavra pi pelo valor
    #define sauda_pedrow cout << "Bom dia Pedrow!" << endl; // Vai trocar todas as ocorrencias da  palavra sauda_pedrow pelo valor (incluido o ;)
    cout << pi + 4 << endl;  
    sauda_pedrow

    // Declarando multiplas varivaeis do msm tipo
    string nome, marca="Aston Martin";
    nome = "Pedrow";

    int idade, ano, mes=5;
    idade = 19;
    ano = 2024;

    return 0;
}
