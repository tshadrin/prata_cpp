//
// Created by Анатолий Шадрин on 05.05.22.
//
#include <iostream>

int main()
{
    using namespace std;

    int carrots;
    cout << "Сколько у тебя морковок?" << endl;
    cin >> carrots;
    cout << "Держи еще две. ";
    carrots = carrots + 2;
    cout << "Теперь у тебя есть " << carrots << " морковок." << endl;
    return 0;
}
