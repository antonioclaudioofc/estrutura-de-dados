#include <iostream>
using namespace std;

const int NUM_GRADES = 3;

void separator()
{
    cout << "==========================" << endl;
}

float calculateAverage(float grades[], int numGrades)
{
    float sum = 0.0;
    for (int i = 0; i < numGrades; i++)
    {
        sum += grades[i];
    }
    return sum / numGrades;
}

void printSituation(float studentAverage, float classAverage)
{
    if (studentAverage < classAverage)
    {
        printf("Situacao: Abaixo da media\n");
    }
    else if (studentAverage == classAverage)
    {
        printf("Situacao: Esta na media\n");
    }
    else
    {
        printf("Situacao: Acima da media\n");
    }
}

int main()
{
    float classAverage, studentGrades[NUM_GRADES], studentAverage;

    separator();
    printf("Situacao Academica\n");
    separator();

    printf("Digite a media da TURMA: ");
    cin >> classAverage;

    if (cin.fail())
    {
        cerr << "Erro: Entrada invalida. Insira um numero.\n";
        return 1;
    }

    separator();
    printf("Digite as notas do(a) estudante:\n");

    for (int i = 0; i < NUM_GRADES; i++)
    {
        printf("Nota %d: ", i + 1);
        cin >> studentGrades[i];
        if (cin.fail())
        {
            cerr << "Erro: Entrada invalida. Insira um numero.\n";
            return 1;
        }
    }

    separator();

    studentAverage = calculateAverage(studentGrades, NUM_GRADES);

    printf("Media TURMA: %.2f\n", classAverage);
    printf("Media Estudante: %.2f\n", studentAverage);

    printSituation(studentAverage, classAverage);

    return 0;
}
