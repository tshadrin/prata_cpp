//
// Created by Анатолий Шадрин on 05.05.22.
//
#include <iostream>

void digToTime(int h, int m);
int main()
{
    int h, m;
    std::cout << "введите количество часов: ";
    std::cin >> h;
    std::cout << "введите количество минут: ";
    std::cin >> m;
    digToTime(h,m);
}

void digToTime(int h, int m)
{
    std::cout << "Time: " << h << ":" << m << std::endl;
}
