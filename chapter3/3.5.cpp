#include <iostream>

int main()
{
    using namespace std;
    cout << "Введите население Земли: ";
    long long population;
    cin >> population;
    cout << "Введите население страны: ";
    long long p_country;
    cin >> p_country;
    cout << "Население этой страны составляет " << (double)p_country / (population / 100) << "% от населения мира.";
    return 0;
}
