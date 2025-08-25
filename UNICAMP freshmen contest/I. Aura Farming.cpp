#include <bits/stdc++.h>
 
using namespace std;

class Nodo{
    public:
    int auramin;
    int plusaura;

  bool operator < (Nodo coisa)
  {
    if(this->auramin < coisa.auramin)
    {
      return true;
    }
    else return false;
  }
    
};
 
int main(void) {
  int Nproblemas = 0, Kaura = 0;
  cin >> Nproblemas >> Kaura;
 

  vector<Nodo> lista;
  for (int i = 0; i < Nproblemas; i++) {
    Nodo aux;
    cin >> aux.auramin >> aux.plusaura;
    lista.push_back(aux);
  }
 
  sort(lista.begin(), lista.end());
  for (int i = 0; i < lista.size(); i++) {
    if (lista[i].auramin <= Kaura) {
      Kaura += lista[i].plusaura;
    }
    else 
    {
        break;
    }
  }
 
  cout << Kaura << endl;
}