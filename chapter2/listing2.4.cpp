//
// Created by Анатолий Шадрин on 05.05.22.
//
#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    cout << "Введите площадь помещения: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "Эта площадь эквивалентна сторонам размером " << side << endl;
    cout << "Как очаровательно!" << endl;
    return 0;
}
