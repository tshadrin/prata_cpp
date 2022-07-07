#include <iostream>

int main()
{
    using namespace std;
    cout << "Введите рост в дюймах:_";
    int inches;
    cin >> inches;
    cout << "Ваш рост " << inches / 12 << " футов " << inches % 12 << " дюймов.";
    return 0;
}
