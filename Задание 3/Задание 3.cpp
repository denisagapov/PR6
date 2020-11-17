
#include <iostream>
using namespace std;
int main()
{
    int mass[100];
    int sum = 0;
    setlocale(NULL, "rus");
    for (int i = 0; i < size(mass); i++)
    {
        mass[i] = rand() % 10;
        cout << mass[i] << " ";
        sum += mass[i];
    }
    cout << endl;
    cout << "Сумма чисел = " << sum << endl;
    system("pause");
}
