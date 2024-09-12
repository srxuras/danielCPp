#include <iostream>
#include "Data.cpp"
#include "Endereco.cpp"
using namespace std;
class Pessoa{
    private:
        string nome;
        string sobrenome;
        long cpf;
        Data nascimento;
        Endereco local;

    public:

        Pessoa(string nome, string sobrenome, long cpf , int dia, int mes, int ano,Endereco local):
        nome{nome}, sobrenome{sobrenome}, nascimento{dia,mes,ano}, local{local}
        {
            this-> cpf = cpf;
        }
        
        void setNome(string nome){
            this->nome = nome;
        }

        void setSobrenome(string sobrenome){
            this->sobrenome = sobrenome;
        }

        void setCPF(long cpf){
            this->cpf= cpf;
        }

        string getNome(){
            return nome;
        }

        string getSobrenome(){
            return sobrenome;
        }

        long getCPF (){
            return cpf;
        }

        string getNascimento(){
           return this->nascimento.getData();
        }
        string getLocal(){
            return this->local.getEndereco();
        }

};