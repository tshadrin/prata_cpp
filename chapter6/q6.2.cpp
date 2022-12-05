#include <iostream>
#include <cctype>

int main()
{
    using namespace std;

    char ch = 'd';
    if (isalpha(ch)) {
        cout << ch;
    } else {
        cout << "error";
    }

    return 0;
}