#include <iostream>
#include "ContaBancaria.hpp"
using namespace std;

int main() {

    // Criação dos clientes
    Cliente cliente1("Ana", "111.111.111-11");
    Cliente cliente2("Bruno", "222.222.222-22");
    Cliente cliente3("Carla", "333.333.333-33");

    // Criação das contas bancárias com saldos iniciais
    ContaBancaria conta1(1001, cliente1, 1000.0);
    ContaBancaria conta2(1002, cliente2);
    ContaBancaria conta3(1003, cliente3);

    // ----------------- TESTE 1 -----------------
    cout << "\n[TESTE 1] Saque com saldo suficiente:\n";
    conta2.depositar(500.0);     // Bruno recebe R$500
    conta2.sacar(200.0);         // Bruno saca R$200 (deve restar 300)
    conta2.exibirSaldo();        // Esperado: 300.0

    // ----------------- TESTE 2 -----------------
    cout << "\n[TESTE 2] Saque com saldo insuficiente:\n";
    conta2.sacar(1000.0);        // Bruno tenta sacar R$1000 (deve falhar)

    // ----------------- TESTE 3 -----------------
    cout << "\n[TESTE 3] Depósito em Carla:\n";
    conta3.depositar(250.0);     // Carla recebe R$250
    conta3.exibirSaldo();        // Esperado: 250.0

    // ----------------- TESTE 4 -----------------
    cout << "\n[TESTE 4] Transferência com valor exato:\n";
    conta3.transferir(250.0, conta1); // Carla transfere tudo para Ana
    conta3.exibirSaldo();             // Esperado: 0.0
    conta1.exibirSaldo();             // Esperado: 1000 + 250 = 1250.0

    // ----------------- TESTE 5 -----------------
    cout << "\n[TESTE 5] Transferência sem saldo:\n";
    conta3.transferir(100.0, conta1); // Carla tenta transferir sem saldo (falha esperada)

    // ----------------- TESTE 6 -----------------
    cout << "\n[TESTE 6] Transferência para duas contas:\n";
    conta1.transferir(100.0, conta2, conta3); // Ana transfere R$50 para Bruno e R$50 para Carla
    conta1.exibirSaldo();                     // Esperado: 1250 - 100 = 1150.0
    conta2.exibirSaldo();                     // Esperado: 300 + 50 = 350.0
    conta3.exibirSaldo();                     // Esperado: 0 + 50 = 50.0

    // Exibição das informações finais
    cout << "\n[INFORMAÇÕES FINAIS]\n";
    conta1.exibirInformacoes();
    conta2.exibirInformacoes();
    conta3.exibirInformacoes();

    return 0;
}

