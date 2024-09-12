#include <iostream>
#include "Pessoa.cpp"
using namespace std;

int main(){
    Endereco e ("barao do triunfo", 22,"brooklyn");
    Pessoa p("Nome","Sobrenome",123456789,9,11,2024,e);
    
    
    cout<<"Dados da pessoa" << endl;
    cout<< "Nome:"<< p.getNome()<<"; Sobrenome:"<<p.getSobrenome()<< endl;
    cout<< "CPF:"<<p.getCPF()<< endl;
    cout<< "Nascimento: "<<p.getNascimento()<<endl;
    cout<< "Endereco: " << p.getLocal()<< endl;
}