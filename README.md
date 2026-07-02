# Central de Alertas - Exercício Integrador (POO)

Este repositório contém a implementação do **Exercício Integrador: Central de Alertas**, desenvolvido para a disciplina de Programação Orientada a Objetos (2026.1) do Centro de Informática - UFPB.

## Conceitos de POO Aplicados

O projeto foi estruturado seguindo rigorosamente as boas práticas de C++ Moderno (C++17) e os pilares de POO exigidos:

* **Interface Pura:** Criação da interface `formatavel` contendo apenas o método virtual puro `formatar()` e destrutor virtual padrão.
* **Classe Abstrata:** Classe `alerta` atuando como base, encapsulando os atributos `origem` e `severidade` (com validação no construtor para o intervalo `[1, 3]`).
* **Template Method:** O método `alerta::exibir()` é não-virtual e define o esqueleto da impressão, invocando os métodos virtuais `tipo()` e `formatar()` via despacho dinâmico.
* **Herança e Restrições (`final`/`override`):**
  * `alerta_critico` marcado como `final` (severidade fixa em 3).
  * `alerta_aviso` e `alerta_info` utilizando `override` para especializar o comportamento.
* **Gerenciamento de Memória Moderno (Smart Pointers):** Utilização de `std::vector<std::unique_ptr<alerta>>` na classe `central`. O método `registrar()` recebe o ponteiro por valor e faz o uso de `std::move`. A função `main()` instancia os objetos exclusivamente via `std::make_unique`, eliminando o uso de `new` ou `delete` manuais.

## Como Compilar e Executar o Projeto

Como o projeto está estruturado utilizando o **CMake** e modularizado em múltiplos arquivos `.cpp` e `.hpp`, siga os passos abaixo no terminal para realizar a compilação e execução de forma correta:

### 1. Pré-requisitos
Certifique-se de ter o compilador GCC/G++ e o CMake instalados no seu sistema Linux.

### 2. Passos para Compilação

Na raiz do projeto (onde está o arquivo `CMakeLists.txt`), execute os seguintes comandos:

```bash
mkdir build && cd build
cmake ..
cmake --build .
