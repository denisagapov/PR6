
#include <iostream>
using namespace std;
int main()
{
    int mass[20];
    setlocale(NULL, "rus");
    for (int i = 0; i <size(mass); i++)
    {
        mass[i] = rand() % 20 - 10;
        cout << mass[i] << " ";
        if (mass[i] < 0)
        {
            mass[i] = 0;
        }
    } 
    cout << endl;
    cout << "Массив с заменой отрицательных чисел:" << endl;
    for (int i = 0; i < size(mass); i++)
    {
        cout << mass[i] << " ";
    }
    system("pause");
}
