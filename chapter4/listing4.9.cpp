#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    str1 = str2;
    strcpy(charr1, charr2);

    str1 += " paste";
    strcat(charr1, " juice");

    std::string::size_type len1 = str1.size();
    size_t len2 = strlen(charr1);
    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";

    return 0;
}