int ZnajdzKlucz() {
    int Liczniki[35];
    for (int i=0; i<35; i++) Liczniki[i]=0;
    string s;
    ifstream wejscie("t_zaszyfrowany.txt");
    while(!wejscie.eof()) {
        getline(wejscie,s);
        for(int i=0; i<s.size(); i++) {
            int j=alfabet_m.find(s[i]);
            if(j>=0 &&j<35) Liczniki[j]++;
            else {
                int j=alfabet_w.find(s[i]);
                if(j>=0 && j<35) Liczniki[j]++;
            }
        }
    }
    wejscie.close();
    int klucz=0;
    for(int i=1; i<35; i++)
        if(Liczniki[i]>Liczniki[klucz]) klucz=i;
    return klucz;
}

void Szyfruj(int klucz) {
    string s;
    ifstream wejscie("t_zaszyfrowany.txt");
    ofstream wyjscie("t_odszyfrowany.txt");
    while(!wejscie.eof()) {
        getline(wejscie, s);
        wyjscie<<Cezar(s, klucz)<<endl;
    }
    wejscie.close(); wyjscie.close();
}

int main() {
    Szyfruj(35-ZnajdzKlucz());
    cout<<"Rozwiazanie jest w pliku";
}
