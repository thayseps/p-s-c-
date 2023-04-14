#include <iostream>

using namespace std;

class Funcionario {
  private:
    float vhora, qtdhr;
    string nome;

  public:
    void setVhora(float _vhora) {
      vhora = _vhora;
    }

    void setQtdhr(float _qtdhr) {
      qtdhr = _qtdhr;
    }
    void setNome(string _nome){
      nome = _nome;
    }

    float getVhora() {
      return vhora;
    }

    float getQtdhr() {
      return qtdhr;
    }
    string getNome(){
      return nome;
    }

    float calculoSalario() {
      float salario;
      salario = qtdhr * vhora;
      return salario;
    }
};

int main() {
  Funcionario funcionario;
  funcionario.setQtdhr(200);
  funcionario.setVhora(35);
  funcionario.setNome("Pedro");
  
  cout << "Apresento todos os atributos e o salário de Pedro: \n\n";
  cout <<"Nome: " << funcionario.getNome(); 
  cout<< "\nValor hora: " << funcionario.getVhora();
  cout << "\nQuantidade de horas: " << funcionario.getQtdhr();
  cout << "\nSalario: " << funcionario.calculoSalario();
  return 0;
}
