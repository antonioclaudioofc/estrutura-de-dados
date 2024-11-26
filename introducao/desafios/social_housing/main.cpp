#include <iostream>
using namespace std;

void separator()
{
    cout << "==========================" << endl;
}

int main()
{
    int age;
    float salary;

    separator();
    cout << "Programa de Moradia Popular" << endl;
    separator();

    cout << "Digite sua idade: ";
    cin >> age;
    if (cin.fail() || age <= 0)
    {
        cerr << "Erro: Idade invalida. Por favor, insira um numero inteiro positivo.\n";
        return 1;
    }

    cout << "Digite seu salario (ex: 1200.00): ";
    cin >> salary;
    if (cin.fail() || salary <= 0)
    {
        cerr << "Erro: Salario invalido. Por favor, insira um numero positivo.\n";
        return 1;
    }

    separator();

    if (age > 21 && salary < 1200)
    {
        cout << "Parabens! Voce pode participar do programa." << endl;
    }
    else
    {
        cout << "Infelizmente voce nao cumpre todos os requisitos para participar." << endl;
    }

    separator();
    return 0;
}
