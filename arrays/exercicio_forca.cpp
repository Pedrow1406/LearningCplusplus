#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{

    string word_secret;
    cout << "Digite a palavra secreta: ";
    cin >> word_secret;
    char *word = new char[word_secret.size()];
    int letras_restantes = word_secret.size();

    for (int i = 0; i < word_secret.size(); i++){   
        word[i] = 0; // Troca cada elemento desse array por 0 (isso é feito para os elementos desse array ter um valor padrao)
    }
    
    int errors = 0;
    bool isError = false;
    while (letras_restantes > 0){
        if (errors == 5){
            break;
        }
  
        if (word_secret.size() == letras_restantes){
            system("cls");
            for (int i = 0; i < word_secret.size(); i++){
                cout << "*" << " ";
            }        
            cout << endl;
            if (isError){
                errors += 1;
                cout << "Letra Incorreta! " << endl;
                cout << "Numero de Tentativas: " << errors << endl;
            }            
        }

        isError = true;

        letterType:
        cout << "Digite uma letra: ";
        string letra;
        cin >> letra;

        if (letra.size() > 1){
            cout << "Digite apenas 1 caractere por vez!" << endl;
            goto letterType;
        } else if (letra.size() == 0){
            cout << "Digite algum caractere válido" << endl;
            goto letterType;
        }
        char letra_char = letra[0];

        for (int i = 0; i < word_secret.size(); i++){
            if (letra_char != word[i]){
                if (letra_char == word_secret[i]){
                    word[i] = letra_char;
                    letras_restantes -= 1;
                    isError = false;
                }
            } else {
                cout << "Essa letra ja foi digitada!" << endl;
                goto letterType;
            }
        }

        
        if (word_secret.size() != letras_restantes){
            system("cls");
            for (int i = 0; i < word_secret.size(); i++){
                if (word[i] == 0){
                    cout << "*" << " ";
                }else{
                    cout << word[i] << " ";
                }
            }
            cout << endl;
            if (isError){
                errors += 1;
                cout << "Letra Incorreta! " << endl;
                cout << "Numero de Tentativas: " << errors << endl;
            }
        }
    }
    if (errors == 5){
        cout << "Voce perdeu por excesso de tentantivas invalidas";
    } else{
        cout << "Parabens voce venceu com " << errors << " tentativas invalidas.";
    }

    return 0;
}