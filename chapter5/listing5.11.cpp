#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char word[] = "?ate";

    for (char ch = 'a'; strcmp(word, "mate"); ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}