#include <iostream>

int main()
{
    const double SECONDS_IN_MINUTE = 60.0;
    const double MINUTES_IN_DEGREES = 60.0;
    using namespace std;
    int degrees, minutes, seconds;
    cout << "Введите широту в градусах, минутах, секундах: \n";
    cout << "Сначала введите градусы: ";
    cin >> degrees;
    cout << "Затем введите минуты: ";
    cin >> minutes;
    cout << "Затем введите секунды: ";
    cin >> seconds;
    cout << degrees << " градусов "
         << minutes << " минут "
         << seconds << " секунд это "
         << degrees + (minutes / MINUTES_IN_DEGREES) + (seconds / (MINUTES_IN_DEGREES * SECONDS_IN_MINUTE)) << " градусов.";
    return 0;
}
