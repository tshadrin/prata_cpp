//
// Created by Анатолий Шадрин on 06.05.22.
//
#include <iostream>
void simon(int n);

int main()
{
    using namespace std;
    simon(3);
    cout << "Введите целое число: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Готово!" << endl;

    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Саймон говорит потрогай свои игрушки " << n << " раз." << endl;
}