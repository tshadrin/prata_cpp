#include <iostream>

int main()
{
    char ch;
    std::cout << "Type, and I shell repeat.\n";
    std::cin.get(ch);

    while (ch != '.') {
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ++ch;
        std::cin.get(ch);
    }
    //++ch не меняет тип ch, при этом ch + 1 в cout приведет результат выражения к типу int
    std::cout << "\nPlease excuse the slight confusion.\n";
    //std::cin.get();
    //std::cin.get();

    return 0;
}