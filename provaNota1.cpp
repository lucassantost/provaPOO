#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Funcionario
{
	public:
		string nome;
		string departamento;
		float salario;
		
		string getNome()
		{
			return this -> nome;
		}
		
		void setNome(string nome)
		{
			this -> nome = nome;
		}
		
		string getDepartamento()
		{
			return this -> departamento;
		}
		
		void setDepartamento(string departamento)
		{
			this -> departamento = departamento;
		}
		
		float getSalario()
		{
			return this -> salario;
		}
		
		void setSalario(float salario)
		{
			this -> salario = salario;
		}
		
		
		
		
		void reajuste()
		{
			float percentReaj;
			float aumento;
			float novoSalario;
			
			cout << "Percentual de reajuste: ";
			cin >> percentReaj;
			
			aumento = salario * (percentReaj / 100);
			
			novoSalario = salario + aumento;
			
			cout<< "\n";
				
			cout << "O valor do novo salario e ";
			cout << novoSalario;
						
		} 
};

int main() {
	
	string nome;
	string departamento;
	float salario;
	
	Funcionario f1;
	cout << "Informe o nome do funcionario: ";
	getline(cin, nome);
	f1.setNome(nome);
	cout << "Informe o departamento do funcionario: ";
	getline(cin, departamento);
	f1.setDepartamento(departamento);
	cout << "Informe o salario do funcionario: ";
	cin >> salario;
	f1.setSalario(salario);
	cout << "Nome: "            << f1.getNome()          << "\n";
	cout << "Departamento: "    << f1.getDepartamento()  << "\n";
	cout << "Salario: "         << f1.getSalario()       << "\n";
	
	cout << "\n";
	
	f1.reajuste(); 
	
	return 0;
}
