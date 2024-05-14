#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue <string> animes;
    animes.push("Bleach");
    animes.push("Uzumaki");
    animes.push("Berserk");
    animes.push("HunterxHunter");
    
    cout << "Tamanho do Queue: " << animes.size() << endl;
    cout << "Primeiro elemento da Queue: " << animes.front() << endl; 
    cout << "Ultimo elemento da Queue: " << animes.back() << endl;

    animes.pop(); // Remove o primeiro elemento (front) da Queue
    cout << "Tamanho do Queue: " << animes.size() << endl;
    cout << "Primeiro elemento da Queue: " << animes.front() << endl; 

    if (!animes.empty()){
        cout << "A Queue de Animes NAO esta vazia!" << endl;
    } else if (animes.empty()){
        cout << "A Queueu de Animes esta vazia!" << endl;
    }
    
    return 0;
}