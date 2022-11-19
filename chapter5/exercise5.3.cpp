#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter intgers for calculating sum of entered integers:" << endl;
    int temp = 0, sum = 0;
    cin >> temp;
    while(temp != 0) {
        sum += temp;
        cout << "Sum of current integers is: " << sum << endl;
        cout << "Enter another integer or 0 for exit: " << endl;
        cin >> temp;
    }

    return 0;
}