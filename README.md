ASS: FELIX D. DE OLIVEIRA

Calculadora em C++
- Projeto desenvolvido para praticar os conceitos de sobrecarga e sobrescrita em C++.
Descrição
- Implementação de uma calculadora que realiza as operações básicas:

- Soma
- Subtração
- Multiplicação
- Divisão

Conceitos aplicados
Sobrecarga (Overloading): mesmo nome de função com parâmetros diferentes.

calcular(double, double, char) — opera com números decimais
calcular(int, int, char) — opera com números inteiros
calcular(double, double, double, char) — opera com três valores

Sobrescrita (Overriding): classe filha redefine método da classe pai.

Calculadora Cientifica sobrescreve o método exibirTipo() da classe Calculadora

Estrutura
- calculadora-cpp/
- └── calculadora.cpp

Como compilar e executar
- bashg++ calculadora.cpp -o calculadora
- ./calculadora

Disciplina
- Programação Orientada a Objetos
