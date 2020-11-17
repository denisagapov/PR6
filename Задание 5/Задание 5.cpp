
#include <iostream>
using namespace std;
int main()
{
    int mass[30];
    int max = 0;
    int min = 0;
    int imax;
    int imin;
    int j;
    setlocale(NULL, "rus");
    for (int i = 0; i < size(mass); i++)
    {
        mass[i] = rand() % 10 - 5;
        cout << mass[i] << " ";
        if (mass[i] > max)
        {
            max = mass[i];
            imax = i;
        }
        if (mass[i] < min)
        {
            min = mass[i];
            imin = i;
        }
    }
    cout << endl;
    j = mass[imin];
    mass[imin] = mass[imax];
    mass[imax] = j;
    cout << "Конечный массив:" << endl;
    for (int i = 0; i < size(mass); i++)
    {
        cout << mass[i] << " ";
    }
    system("pause");
}
