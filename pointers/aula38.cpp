#include <iostream>

using namespace std;


void setAnimesArray(string *a){
    a[0] = "Bleach";
    a[1] = "Uzumaki";
    a[2] = "HunterxHunter";
}
int main(int argc, char const *argv[])
{
    string animes[3];
    setAnimesArray(animes);
    for (size_t i = 0; i < animes->size(); i++)
    {
        cout << animes[i] << endl;
    }
     
    return 0;
}

