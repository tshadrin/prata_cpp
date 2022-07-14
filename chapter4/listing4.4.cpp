#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    //А че толку? Если имя не помещается в массив - второй getline не срабатывает.
    //Пока не вызовешь     cin.clear();
    cout << "I have some delicious " << dessert;
    cout << " for you " << name << ".\n";

    return 0;
}