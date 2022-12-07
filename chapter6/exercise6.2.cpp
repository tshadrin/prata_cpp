#include <iostream>
#include <array>

int main()
{
    using namespace std;

    const int ArSize = 10;
    array <double, ArSize> values;
    int count = 0;
    double sum = 0.0;

    for(; count < ArSize && cin >> values[count]; count++) {
        sum += values[count];
    }

    if (count == 0) {
        cout << "No values entered." << endl;
        return 1;
    }

    double average = sum / count;
    cout << "Average value is " << average << endl;
    for (double value: values) {
        if (value > average) {
            cout << "This value > average " << value << endl;
        }
    }
    return 0;
}
