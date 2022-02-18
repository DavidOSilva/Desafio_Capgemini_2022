#include <iostream>
using namespace std;
  
int main() {

  int n;

  //Neste trecho você será questionado sobre o valor de n. 
  cout << "Escreva o valor de n:" << endl;
  cin >> n;
  cout << endl;

  //Utilizei estruturas de repetição para formar a escada
  for(int i = 1;i <= n; i++){
    
    //Estrutura responsável em criar os espaços em branco
    for(int k = 1;k <= n - i; k++){
      cout << " ";
    }

    //Estrutura responsável em gerar os asteriscos
    for(int j = 1; j <= i; j++){
      cout << "*";
    }
    cout << endl;
  }

}