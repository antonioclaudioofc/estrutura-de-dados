#include <iostream>
#include <limits>
using namespace std;

void separator()
{
    cout << "==========================" << endl;
}

float pow(float base, int expoent)
{
    if (expoent == 0)
        return 1;
    if (expoent == 1)
        return base;
    return base * pow(base, expoent - 1);
}

int main()
{
    float base;
    int expoent;
    char yesOrNot;
    bool continueCalculation = true;

    separator();
    cout << "Calculadora de Exponenciação" << endl;
    separator();

    while (continueCalculation)
    {
        cout << "Digite a base: ";
        cin >> base;
        if (cin.fail())
        {
            cerr << "Erro: Entrada inválida. Por favor, insira um número real.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Digite o expoente (número natural): ";
        cin >> expoent;
        if (cin.fail() || expoent < 0)
        {
            cerr << "Erro: O expoente deve ser um número inteiro não negativo.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        float result = pow(base, expoent);
        printf("O resultado de %.2f elevado a %d é %.2f\n", base, expoent, result);

        cout << "Gostaria de continuar? [s/n]: ";
        cin >> yesOrNot;
        if (tolower(yesOrNot) == 'n')
        {
            continueCalculation = false;
        }
    }

    separator();
    cout << "Obrigado por usar a calculadora de exponenciação!\n";
    return 0;
}
