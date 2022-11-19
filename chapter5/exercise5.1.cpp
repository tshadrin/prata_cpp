#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter two integers small and big" << endl;
    cout << "Enter small integer: ";
    int small, big = 0;
    cin >> small;
    cout << "Enter second integer: ";
    cin >> big;
    if (small >= big) {
        cout << "Error: incorrect input" << endl;
        return 1;
    }
    int sum = 0;
    for (int i = small; i <= big; i++) {
        sum +=i;
    }
    cout << "Sum of numbers between " << small << " and " << big << " is " << sum << endl;
    return 0;
}