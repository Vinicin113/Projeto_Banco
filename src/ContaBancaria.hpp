#ifndef CONTABANCARIA_HPP
#define CONTABANCARIA_HPP

#include <iostream>
#include "Cliente.hpp"
using namespace std;

//Classe ContaBancaria
class ContaBancaria {
private:
    int numero;
    Cliente titular;
    double saldo;

public:
    //construtor
    ContaBancaria(int numero, const Cliente& titular, double saldoInicial = 0.0);
    //funções relacionadas ao banco
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, ContaBancaria& destino);
    void transferir(double valor, ContaBancaria& destino1, ContaBancaria& destino2);
    //funções relacionadas ao exibir
    void exibirSaldo() const;
    void exibirInformacoes() const;
};

#endif
