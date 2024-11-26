#include <iostream>
using namespace std;

void separator()
{
    cout << "==========================" << endl;
}

int calculateFatorial(int value)
{
    if (value <= 1) return 1;
    return value * calculateFatorial(value - 1);
}

int main()
{
    int value;
    separator();
    cout << "Calculadora de Fatorial\n";
    separator();

    cout << "Digite um número inteiro positivo: ";
    cin >> value;

    if (cin.fail() || value < 0)
    {
        cerr << "Erro: Por favor, insira um número inteiro não negativo.\n";
        return 1;
    }

    separator();

    int fatorial = calculateFatorial(value);

    printf("O fatorial de %d é %d\n", value, fatorial);

    return 0;
}
