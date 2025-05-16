#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
using namespace std;

//Classe Cliente
class Cliente {
private:
    string nome; 
    string cpf; 

public:
    //construtor
    Cliente(string nome, string cpf);
    //getters
    string getNome() const;
    string getCpf() const;
};

#endif