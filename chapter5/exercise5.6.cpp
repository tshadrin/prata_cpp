#include <iostream>
#include <array>
#include <string>
const int ArraySize = 12;
const int Years = 3;

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
    array<array<int, ArraySize>, 3> sales {};

    for (int j = 0; j < Years; j++) {
        for (int i = 0; i < ArraySize; i++) {
            cout << "Enter number of sales in " << months[i] << " year " << j+1 << ": " << endl;
            cin >> sales[j][i];
        }
    }

    array<int, Years> sum {0, 0, 0};
    int sum_all = 0;
    for (int i = 0; i < Years; i++) {
        for (const int sale: sales[i]) {
            sum[i] += sale;
        }
        cout << "Sales for year " << i << " = " << sum[i] << endl;
        sum_all += sum[i];
    }
    cout << "Sales for all years =  " << sum_all << endl;



    return 0;
}