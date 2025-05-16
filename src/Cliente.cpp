#include "Cliente.hpp"

//construtor
Cliente::Cliente(string nome, string cpf) 
: nome(nome), cpf(cpf) {}

//getter retorna o nome
string Cliente::getNome() const{
    return nome;
}

//getter retorna o cpf
string Cliente::getCpf() const{
    return cpf;
}
    