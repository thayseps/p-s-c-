//Entrar com o salário de uma pessoa e imprimir o desconto do INSS segundo a tabela 
//abaixo:
//- menor ou igual a R$ 600,00 – isento ;
//- maior que R$ 600,00 e menor ou igual a R$ 1200,00 – 20% ;
//- maior que R$ 1200,00 e menor ou igual a R$2000,00 – 25% ;
//- maior que R$ 2000,00 – 30% .

#include <iostream>

using namespace std;

int main() {

  float salario, desconto;
  cout << "Por favor, informe o seu salário: ";
  cin >> salario;

  if (salario<=600) {
    cout << "\nIsento";  
  } else if (salario <=1200) {
      desconto = salario * 0.2;
      cout << "\nSeu desconto é de 20%, equivalente a R$";
      cout << desconto;
      cout << " do seu salário.";
  } else if (salario <=2000) {
    desconto = salario * 0.25;
    cout << "\nSeu desconto é de 25%, equivalente a R$";
    cout << desconto;
    cout << " do seu salário.";
  } else if (salario >2000) {
    desconto = salario * 0.3;
    cout << "\nSeu desconto é de 30%, equivalente a R$";
    cout << desconto;
    cout << " do seu salário.";
  }
   
}