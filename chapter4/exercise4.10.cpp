#include <iostream>
#include <array>



int main()
{
    using namespace std;

    const int SIZE = 3;
    array<int, SIZE> ar;

    cout << "Enter three race results." << endl << "Enter first result: ";
    cin >> ar[0];
    cout << "Enter second result: ";
    cin >> ar[1];
    cout << "Enter third result: ";
    cin >> ar[2];

    cout << "Race results are " << ar[0] << " " << ar[1] << " " << ar[2] << endl;
    cout << "Average result is " << (ar[0] + ar[1] + ar[2]) / SIZE;

    return 0;
}