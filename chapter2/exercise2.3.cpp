//
// Created by Анатолий Шадрин on 05.05.22.
//
#include <iostream>

void messageOne();
void messageTwo();

int main()
{
    messageOne();
    messageOne();
    messageTwo();
    messageTwo();
}
void messageOne()
{
    std::cout << "Three blind mice" << std::endl;
}
void messageTwo()
{
    std::cout << "See how they run" << std::endl;
}
