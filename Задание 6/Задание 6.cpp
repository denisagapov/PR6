#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int n, k = 0;
    cout << "Введите количество элементов в массиве:";
    cin >> n;
    cout << endl;
    int spread = 3;
    int* mass = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (rand() % 2 == 1) {
            mass[i] = -spread + rand() % (spread * 2) + 1;
        }
        else
        {
            mass[i] = -spread + rand() % (spread * 2);
        }
        cout << mass[i] << " ";
    }
    for (int i = 1; i < n-1; i++)
    {
        if (mass[i - 1] == mass[i + 1]) {
            k++;
        }
    }
    cout << endl;
    cout << "Количество пар соседних элементов массива: " << k << endl;
    system("pause");
}