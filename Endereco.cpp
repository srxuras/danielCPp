#include <iostream>
using namespace std;
class Endereco{
    private:
    string rua,bairro;
    int numero;

    public:
        Endereco ( string rua, int numero, string bairro):
        rua{rua},numero{numero},bairro{bairro}{}

        string getEndereco(){
            return "Rua:" + rua + "Numero: "+ to_string(numero) + " " + "Bairro" + bairro; 
        }

};