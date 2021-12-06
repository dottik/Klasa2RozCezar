#include <iostream>
#include <string>

using namespace std;

int main() {
  int i;
  string napis;
  cout<<"Podaj napis "<<endl;
  cin>>napis;
  int Liczniki[26];
  for (i=0; i<26; i++)
      Liczniki[i]=0;
  for (i=0; i<26; i++){
      Liczniki[napis[i]-'A']++;
  }
  for(i=0; i<26; i++) 
      if(Liczniki[i]>0) {
      cout<<char(i+'A')<<" - "<<Liczniki[i]<<endl;
      }
  return 0;
}
