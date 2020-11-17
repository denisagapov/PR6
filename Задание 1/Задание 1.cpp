
#include <iostream>
using namespace std;
int main()
{
    int mass[10];
    setlocale(NULL, "rus");
    for (int i = 0; i < size(mass); i++)
    {
        cout << "Введите " << i + 1 << " число" << endl;
        cin >> mass[i];
    }
    for (int i = 0; i < size(mass); i++)
    {
        cout << mass[i] << " ";
    }
    system("pause");
}
