#include <iostream>

int main()
{
    const int SEC_IN_MIN = 60;
    const int MIN_IN_HOUR = 60;
    const int HOURS_IN_DAY = 24;
    using namespace std;
    cout << "Введите количество секунд: ";
    long long seconds;
    cin >> seconds;
    int days = seconds / (SEC_IN_MIN * MIN_IN_HOUR * HOURS_IN_DAY);
    int remains = seconds % (SEC_IN_MIN * MIN_IN_HOUR * HOURS_IN_DAY);
    int hours = remains / (SEC_IN_MIN * MIN_IN_HOUR);
    remains = remains % (SEC_IN_MIN * MIN_IN_HOUR);
    int minutes = remains / SEC_IN_MIN;
    remains = remains % SEC_IN_MIN;
    cout << seconds << " секунд = " << days << " дней " << hours << " часов " <<  minutes << " минут " << remains << " секунд\n";
    return 0;
}
