#include <iostream>
#include <cmath>

using namespace std;

void separator()
{
    cout << "==================================" << endl;
}

float calculateFunction(float x)
{
    return pow(x, 2) - 3 * x + 5;
}

int main()
{
    float x;

    separator();
    cout << "Calculadora de Função Matemática\n";
    separator();
    cout << "Função f(x) = x² - 3x + 5\n";
    cout << "Digite o valor para x: ";
    cin >> x;

    if (cin.fail())
    {
        cerr << "Erro: Entrada inválida. Por favor, insira um número.\n";
        return 1;
    }

    separator();

    float function = calculateFunction(x);

    printf("Fazendo f(%.2f) = %.2f² - 3 * %.2f + 5\n", x, x, x);
    printf("O resultado é %.2f\n", function);

    return 0;
}
