#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string name, fullname, lastname;
    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your lastname:\n";
    getline(cin, lastname);
    fullname = lastname + ", " + name;
    cout << "Here's the information in a single string: " << fullname << endl;

    return 0;
}