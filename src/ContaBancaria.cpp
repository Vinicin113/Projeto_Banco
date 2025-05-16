#include "ContaBancaria.hpp"

//construtor
ContaBancaria::ContaBancaria(int numero,  const Cliente& titular, double saldoInicial)
    : numero(numero), titular(titular), saldo(saldoInicial) {}

//metodo de depositar
void ContaBancaria::depositar(double valor) {
    saldo += valor;
    cout << "Deposito realizado com sucesso." << endl;
}
//metodo de sacar
void ContaBancaria::sacar(double valor) {
    if (saldo >= valor)
    {
        saldo -= valor;
        cout << "Saque realizado com sucesso." << endl;
    } else {
        cout << "Saldo insuficiente para R$" << valor << " saldo atual R$ " << saldo << endl; 
    }
}
//metodo transferir
void ContaBancaria::transferir(double valor, ContaBancaria& destino) {
    if (saldo >= valor)
    {
        saldo -= valor;
        destino.saldo += valor;
        cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << destino.numero << endl;
    } else {
    cout << "Saldo insuficiente na conta para transferir R$" << valor << " saldo atual R$ " << saldo << endl;
    }
}
//sobrecarga do metodo transferir para dois destinos
void ContaBancaria::transferir(double valor, ContaBancaria& destino1, ContaBancaria& destino2) {
    if (saldo >= valor) {
        double metade = valor / 2.0;
        saldo -= valor;
        destino1.saldo += metade;
        destino2.saldo += metade;
        cout << "Transferido: R$ " << metade << " para cada conta (" << destino1.numero
             << " e " << destino2.numero << ")"
             << " da conta " << numero << endl;
    } else {
        cout << "Saldo insuficiente para transferir R$" << valor 
             << ". Saldo atual: R$" << saldo << endl;
    }
}
//metodo que exibe o saldo
void ContaBancaria::exibirSaldo() const {
    cout << "Saldo atual da conta " << numero << ": R$ " << saldo <<endl;
}
//metodo para exibir todas as informações
void ContaBancaria::exibirInformacoes() const {
    cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCpf() <<endl;
    cout << "Número da Conta: " << numero << ", Saldo: " << saldo << endl;
}