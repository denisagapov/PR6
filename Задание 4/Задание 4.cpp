
#include <iostream>
using namespace std;
int main()
{
    int mass[30];
    int min = 0;
    int imin;
    setlocale(NULL, "rus");
    for (int i = 1; i <= size(mass); i++)
    {
        mass[i] = rand() % 20-5;
        cout << mass[i] << " ";
        if (mass[i] < min)
        {
            min = mass[i];
            imin = i;
        }
    }
    cout << endl;
    cout << "Минимальный элемент массива: " << min << endl;
    cout << "Его порядковый номер: " << imin << endl;
    system("pause");
}
