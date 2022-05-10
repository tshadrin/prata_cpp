//
// Created by Анатолий Шадрин on 05.05.22.
//
#include <iostream>

int main()
{
    std::cout << "введите ваш возраст в годах: ";
    int age;
    std::cin >> age;
    std::cout << "ваш возраст в месяцах: " << age * 12 << std::endl;
}
