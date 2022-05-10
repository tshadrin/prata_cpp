//
// Created by Анатолий Шадрин on 05.05.22.
//
#include <iostream>

int main()
{
    std::cout << "введите температуру по цельсию: ";
    int cels;
    std::cin >> cels;
    std::cout << "температура в фаренгейтах: " << cels * 1.8 + 32 << std::endl;
}
