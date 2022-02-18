#include <algorithm>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  
    string palavra;
    int tamanho, resposta;
    cin >> palavra;
  
    tamanho = palavra.size();
    resposta = 0;

    map<string, int> lib;

    for (int i = 1; i < tamanho; i++) {
      for (int j = 0; j < tamanho + 1 - i; j++) {
        string temp = palavra.substr(j, i);
        sort(temp.begin(), temp.end());

        if (lib.find(temp) != lib.end()) {
          lib[temp]++;} 
        else {
          lib[temp] = 1;}
      }
    }

    for (auto const & x : lib) {
      resposta += x.second * (x.second - 1) / 2;
    }

    cout << resposta << endl;
  }