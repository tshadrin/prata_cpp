#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    const double METERS_PER_INCH = 0.0254;
    const double POUNDS_PER_KG = 2.2;

    cout << "Введите рост в футах: ";
    double feets;
    cin >> feets;
    cout << "Введите рост в дюймах: ";
    double inches;
    cin >> inches;
    cout << "Введите вес в фунтах: ";
    double pounds;
    cin >> pounds;

    double meters = (feets*12 + inches) * METERS_PER_INCH;
    double kgs = pounds / POUNDS_PER_KG;
    double bmi = kgs / pow(meters, 2.0);
    cout << "Ваш BMI " << bmi;
    return 0;
}
