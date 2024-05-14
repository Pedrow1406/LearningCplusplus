#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    enum animes{bleach=366, hxh= 148,anime_qualquer, jjk=47}; // Se não for especificado o valor do enum o valor dele sera o anterior  + 1 então então o animequalquer é 149 pq o anterior é 148
    animes animeByEpisode;
    animeByEpisode = bleach;
    cout << "Bleach tem " << animeByEpisode << " episiodios"<< endl;
    cout << "Jujutsu Kaisen tem " << jjk << " episodios" << endl;
    cout << "Hunter x Hunter tem " << hxh << " episodios" << endl;
    return 0;
}