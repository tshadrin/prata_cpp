//
// Created by Анатолий Шадрин on 05.05.22.
//
#include <iostream>

int main()
{
    std::cout << "введите расстояние в фарлонгах: ";
    int fl;
    std::cin >> fl;
    std::cout << "расстояние в ярдах: " << fl * 220 << std::endl;
}