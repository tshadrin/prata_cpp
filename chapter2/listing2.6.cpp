#include <iostream>

int stonetolb(int n);

int main()
{
    using namespace std;
    cout << "Введите количество стоунов: ";
    int stone;
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " стоунов = " << pounds << " фунтов." << endl;

    return 0;
}

int stonetolb(int stones)
{
    return 14*stones;
}