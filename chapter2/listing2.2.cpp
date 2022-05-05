//
// Created by Анатолий Шадрин on 05.05.22.
//
#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "у меня есть ";
    cout << carrots;
    cout << " морковок.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Хрум, хрум. Теперь у меня осталось " << carrots << " морковок." << endl;

    return 0;
}
