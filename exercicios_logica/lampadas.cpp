#include <iostream>

using namespace std;

struct Lampada{
    bool isAcesa = false;

    void displayIsAcesa(){
        if (this->isAcesa){
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

};
struct Interruptor{
    void click(Lampada *l1){
        if (l1->isAcesa){
            l1->isAcesa = false; 
        } else if (!l1->isAcesa){
            l1->isAcesa = true;
        }      
    }
    void click(Lampada *l1, Lampada *l2){
        this->click(l1); 
        if (l2->isAcesa){
            l2->isAcesa = false; 
        } else if (!l2->isAcesa){
            l2->isAcesa = true;
        }      
    }
};
int main(int argc, char const *argv[])
{
    Lampada *lampada1 = new Lampada;
    Lampada *lampada2 = new Lampada;
    Interruptor *interruptor = new Interruptor;

    int N;
    int idInterruptor;
    cout << "Digite a quantidade de vezes que voce quer apertar os interruptores: ";
    cin >> N;
    for (size_t i = 0; i < N; i++){
        start:
        cout << "Digite [1] se quer apertar o interruptor 1" << endl << "Digite [2] se quer apertar o interruptor 2" << endl;
        cin >> idInterruptor;
        switch (idInterruptor)
        {
        case(1):
            interruptor->click(lampada1);
            break;
        case(2):
            interruptor->click(lampada1, lampada2);
            break;
        default:
            cout << "Digito Invalido!" << endl;
            goto start;
        }
    }
    cout << "====================" << endl;
    
    lampada1->displayIsAcesa();
    lampada2->displayIsAcesa();

    return 0;
}