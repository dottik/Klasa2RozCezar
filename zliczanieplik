
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    int i;
    string napis;
    char ch;
    int Liczniki[26];
    for(i=0; i<26; i++) Liczniki[i]=0;
    ifstream wejscie("dane_zliczanie.txt");
    while(!wejscie.eof()) {
        getline(wejscie, napis);
        for(i=0; i<napis.size(); i++) {
            ch=toupper(napis[i]);
            if(ch>='A'&&ch<='Z') Liczniki[ch-'A']++;
        }
    }
    wejscie.close();
    for(i=0; i<26; i++) {
        if(Liczniki[i]>0) {
            cout<<char(i+'A')<<" - ";
            cout<<Liczniki[i]<<endl;
        }
    }

    return 0;
}
