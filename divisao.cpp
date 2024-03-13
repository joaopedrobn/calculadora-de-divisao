#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    if (num2 == 0) {
        std::cout << "Erro: Divisao por zero nao e permitida.\n";
    }
    else {
        double resultado = num1 / num2;
        std::cout << "O resultado da divisao e: " << resultado << "\n";
    }

    return 0;
}