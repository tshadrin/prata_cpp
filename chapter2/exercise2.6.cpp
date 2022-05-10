//
// Created by Анатолий Шадрин on 05.05.22.
//
#include <iostream>

double lyToAe(double ly);
int main()
{
    std::cout << "введите количество световых лет: ";
    double ly;
    std::cin >> ly;
    std::cout << ly << " световых лет это " << lyToAe(ly) << " астрономических едениц" << std::endl;
}

double lyToAe(double ly)
{
    return 63240 * ly;
}
