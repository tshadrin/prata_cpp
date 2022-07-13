#include <iostream>

int main()
{
    using namespace std;
    cout << "Введите расстояние в км: ";
    int km;
    cin >> km;
    cout << "Введите количество израсходованного бензина: ";
    int petrol;
    cin >> petrol;
    cout << "Расход бензина " << (double)petrol/km * 100 << " литров на 100 километров.";
    return 0;
}
