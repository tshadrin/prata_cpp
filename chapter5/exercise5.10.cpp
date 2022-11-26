#include <iostream>

int main()
{
    using namespace std;


    cout << "Enter number of strings for display : " << endl;

    int strings_count = 0;
    cin >> strings_count;

    for (int i = 1; i <= strings_count; i++) {
        for (int j = strings_count - i; j > 0; j--) {
            cout << '.';
        }
        for (int k = i; k > 0; k--) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}