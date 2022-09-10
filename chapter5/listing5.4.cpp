#include <iostream>
const int ArSize = 16;

int main()
{
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;

    for (int i=2; i<ArSize; i++) {
        factorials[i] = i * factorials[i-1];
    }

    //ошибка в листинге, нужно объявить переменную
    int i;
    for (i = 0; i<ArSize; i++) {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }
}