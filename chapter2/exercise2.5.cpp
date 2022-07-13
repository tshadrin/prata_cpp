#include <iostream>

int main()
{
    std::cout << "введите температуру по цельсию: ";
    int cels;
    std::cin >> cels;
    std::cout << "температура в фаренгейтах: " << cels * 1.8 + 32 << std::endl;
}
