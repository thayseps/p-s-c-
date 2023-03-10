//Faça um algoritmo que imprima o menu abaixo:
//MENU ESTADO CIVIL
//1 – solteiro(a)
//2 – desquitado(a)
//3 – casado(a)
//4 – divorciado(a)
//5 -viúvo(a)
//OPÇÃO:
//Ler uma opção e imprimir na tela a descrição equivalente a //opção escolhida. Caso seja
//digitado um valor não existente no menu imprimir “Opção //Inexistente!”.

#include <iostream>

using namespace std;

int main() {

int opcao;
  cout << "Conforme a tabela abaixo, digite um número de acordo com o seu estado civil";
  cout << "\n1 – solteiro(a)";
  cout << "\n2 – desquitado(a)";
  cout << "\n3 – casado(a)";
  cout << "\n4 – divorciado(a)";
  cout << "\n5 - viúvo(a)";
  cout << "\nSua opção: ";
  cin >> opcao;
 
  if (opcao == 1) {
    cout << "\nSolteiro(a): que não se casou.";
  } else if (opcao == 2) {
    cout << "\nDesquitado(a): Desquite é um termo do direito que era usado para designar as separações matrimoniais antes da instituição do divórcio.";
  } else if (opcao == 3) {
    cout << "\nCasado(a): que ou o que se acha no estado de matrimônio.";
  } else if (opcao == 4) {
    cout << "Divorciado(a): é aquele que rompeu o vínculo do seu casamento por meio de uma ação judicial de divórcio ou de uma escritura pública de divórcio consensual.";
  } else if (opcao == 5) {
    cout << "Viúvo(a): mulher ou homem cujo cônjuge morreu e que não se casou de novo.";
  } else {
    cout << "Opção inexistente";
  }
 
 
}
