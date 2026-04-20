#include <iostream>
using namespace std;

// Classe base
class Calculadora {
public:
    // Sobrecarga (overloading) - mesmo nome, parâmetros diferentes
    virtual double calcular(double a, double b, char op) {
        switch (op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/':
                if (b != 0) return a / b;
                else { cout << "Erro: divisão por zero!" << endl; return 0; }
            default:
                cout << "Operação inválida!" << endl;
                return 0;
        }
    }

    // Sobrecarga com int
    virtual int calcular(int a, int b, char op) {
        switch (op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/':
                if (b != 0) return a / b;
                else { cout << "Erro: divisão por zero!" << endl; return 0; }
            default:
                cout << "Operação inválida!" << endl;
                return 0;
        }
    }

    virtual void exibirTipo() {
        cout << "Calculadora Básica" << endl;
    }
};

// Classe derivada com sobrescrita (overriding)
class CalculadoraCientifica : public Calculadora {
public:
    // Sobrescrita (overriding) - redefine o comportamento
    void exibirTipo() override {
        cout << "Calculadora Científica" << endl;
    }

    // Sobrecarga adicional - soma de 3 números
    double calcular(double a, double b, double c, char op) {
        switch (op) {
            case '+': return a + b + c;
            case '*': return a * b * c;
            default:
                cout << "Operação inválida para 3 operandos!" << endl;
                return 0;
        }
    }
};

int main() {
    Calculadora calc;
    CalculadoraCientifica calcCient;

    int escolha;
    double a, b;
    char op;

    cout << "==============================" << endl;
    cout << "   BEM-VINDO À CALCULADORA   " << endl;
    cout << "==============================" << endl;

    cout << "\nEscolha o tipo:" << endl;
    cout << "1 - Calculadora Básica" << endl;
    cout << "2 - Calculadora Científica (3 operandos)" << endl;
    cout << "Opção: ";
    cin >> escolha;

    if (escolha == 1) {
        calc.exibirTipo(); // chama versão base
        cout << "\nDigite o primeiro número: ";
        cin >> a;
        cout << "Digite o operador (+, -, *, /): ";
        cin >> op;
        cout << "Digite o segundo número: ";
        cin >> b;

        double resultado = calc.calcular(a, b, op);
        cout << "\nResultado: " << a << " " << op << " " << b << " = " << resultado << endl;

    } else if (escolha == 2) {
        calcCient.exibirTipo(); // chama versão sobrescrita
        double c;
        cout << "\nApenas + e * disponíveis para 3 operandos." << endl;
        cout << "Digite o primeiro número: ";
        cin >> a;
        cout << "Digite o operador (+, *): ";
        cin >> op;
        cout << "Digite o segundo número: ";
        cin >> b;
        cout << "Digite o terceiro número: ";
        cin >> c;

        double resultado = calcCient.calcular(a, b, c, op);
        cout << "\nResultado: " << a << " " << op << " " << b << " " << op << " " << c << " = " << resultado << endl;
    }

    return 0;
}