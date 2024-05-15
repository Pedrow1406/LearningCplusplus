#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *pt;
    int idades[6];
    pt = &idades[0];
    *pt = 1;
    cout << idades[0] << endl;
    *(++pt) = 10; 
    cout << idades[1] << endl; 
    *(++pt) = 20; 
    cout << idades[2] << endl;
    *(++pt) = 30; 
    cout << idades[3] << endl;
    *(++pt) = 40; 
    cout << idades[4]<< endl;
    *(++pt) = 50;  
    cout << idades[5] << endl; 
    
    return 0;
}