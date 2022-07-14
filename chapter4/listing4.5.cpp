#include <iostream>


int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get();
    cout <<  "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you " << name << ".\n";
    //Тут при переполнении ввода, ввод обрывается размере массива -1(чтобы допихнуть \0)
    //Дальше спокойно в буфер попадает продолжение фразы, которые подставляется в остальные .get()
    return 0;
}