#include <iostream>
#include <string>
using namespace std;

int main() {

  string senha;
  int tamanho, criterios, resposta, faltam, criterios_insatisfeitos;
  bool seiscaracteres, digito, minuscula, maiuscula, especial;
  char caracteres_especiais[12]={'!','@','#','$','%','^','&','*','(',')','-','+'};

  seiscaracteres = false, digito = false, minuscula = false, maiuscula = false, especial = false;
  criterios = 0;
  
//Inicialmente, será necessário inserir a senha
  cout << "Insira sua senha:" << endl;
  cin >> senha;
  tamanho = senha.size();


  //Verificando se a senha possui no minimo 6 caracteres
  if(tamanho >= 6){
    seiscaracteres = true;
}
  //No caso de senhas com menos de 6 caracteres, o algoritmo checa quantos caracteres faltam para atingir o número mínimo
  else{
    seiscaracteres = false;
    faltam = 6 - tamanho;
}

  //Verificador de digitos numéricos
  for(int i = 0;i < tamanho;i++){
    if(senha[i] >= '0' && senha[i] <= '9'){
      digito = true;
      criterios++;
      break;
    }
}

  //Verificador de letras minusculas
  for(int i = 0;i < tamanho;i++){
    if(senha[i] >= 'a' && senha[i] <= 'z'){
      minuscula = true;
      criterios++;
      break;
    }
}

  //Verificador de letras maiusculas
  for(int i = 0;i < tamanho;i++){
    if(senha[i] >= 'A' && senha[i] <= 'Z'){
      maiuscula = true;
      criterios++;
      break;
    }
}

  //Verificador de caracteres especiais
  for(int i = 0;i < tamanho;i++){
    for(int j=0; j < 12;j++){
      if(senha[i] == caracteres_especiais[j]){
        especial = true;
        criterios++;
        break;
      }
    }
  }

  criterios_insatisfeitos = 4 - criterios;
  
  if(seiscaracteres == true){
    resposta = criterios_insatisfeitos;
}
  else{
    if(faltam > criterios_insatisfeitos){
      resposta = faltam;
}
    else if (faltam < criterios_insatisfeitos){
      resposta = criterios_insatisfeitos;
}
    else{
      resposta = faltam;
}
  }

  cout << resposta << endl;
}