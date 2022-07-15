#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    size_t ArraySize = 100;
    char name[ArraySize], lastname[ArraySize];
    char fullname[ArraySize*2+2];

    cout << "Enter your name:\n";
    cin.getline(name, (streamsize)ArraySize);
    cout << "Enter your lastname:\n";
    cin.getline(lastname, (streamsize)ArraySize);
    strcpy(fullname, lastname);
    strcat(fullname, ", ");
    strcat(fullname, name);
    cout << "Here's the information in a single string: " << fullname << endl;

    return 0;
}