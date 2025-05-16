# Projeto Banco

Este projeto é uma simulação simples de um sistema bancário em C++. Ele permite a criação de clientes, contas bancárias e operações básicas como depósito, saque e visualização de saldo.

## Estrutura do Projeto

- `src/Cliente.hpp` / `Cliente.cpp`: Define a classe `Cliente`, responsável por armazenar os dados do cliente.
- `src/ContaBancaria.hpp` / `ContaBancaria.cpp`: Define a classe `ContaBancaria`, com operações como `depositar()`, `sacar()` e `consultarSaldo()`.
- `src/main.cpp`: Contém a função principal com o fluxo de execução do programa.
- `Makefile`: Permite a compilação simplificada do projeto.

## Pré-requisitos

- Compilador C++ (como `g++`)
- Make (para usar o `Makefile`)

## Compilação

Para compilar o projeto, use o seguinte comando no terminal, dentro da pasta `Projeto_Banco`:

```bash
make
