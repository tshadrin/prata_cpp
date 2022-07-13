#include <iostream>

int main()
{
    const double MILES_IN_100KM = 62.14;
    const double LITERS_IN_GALLON = 3.875;
    using namespace std;
    cout << "Введите расход в лирах на 100 километров: ";
    double liters;
    cin >> liters;
    double miles;
    cout << "Расстояние в милях на 1 галлон " << MILES_IN_100KM / (liters / LITERS_IN_GALLON) << " миль.";
    return 0;
}
