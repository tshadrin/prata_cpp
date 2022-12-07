#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;
    while((ch = (char)cin.get()) != '@') {
        if (islower(ch)) {
            cout << (char)toupper(ch);
        } else if(isupper(ch)) {
            cout << (char)tolower(ch);
        } else if (isdigit(ch)){
            continue;
        } else {
            cout << ch;
        }
    }
    cout << "\nBye, you entered @ symbol";
    return 0;
}