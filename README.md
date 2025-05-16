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
```

## Execução
Após a compilação, execute o programa com:

```bash
./build/banco
```

## Funcionalidades
- Criar clientes e contas bancárias
- Realizar depósitos e saques
- Consultar saldo

## Exemplo de Uso
Ao executar o programa, ele mostrará testes automáticos que demonstram todas as funcionalidades implementadas, como:

- Criação de uma conta bancária vinculada a um cliente
- Depósito de valores
- Saques com verificação de saldo
- Impressão de informações e saldos no terminal

## Autor
Vinicius Marques de Almeida   
Aluno de Tecnologia da informação – UFRN  
Projeto desenvolvido para a disciplina de Linguagem de Programação I 
