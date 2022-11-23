#include <iostream>
#include <array>
#include <string>
const int ArraySize = 12;

int main()
{
    using namespace std;

    array<string, ArraySize> months {
        "january",
        "february",
        "martch",
        "april",
        "may",
        "june",
        "july",
        "august",
        "september",
        "october",
        "november",
        "december"
    };
    array<int, ArraySize> sales {};

    for (int i = 0; i < ArraySize; i++) {
        cout << "Enter number of sales in " << months[i] << ": " << endl;
        cin >> sales[i];
    }

    int sum = 0;
    for (const int sale: sales) {
        sum += sale;
    }
    cout << "Sales for this year = " << sum << " books" << endl;

    return 0;
}