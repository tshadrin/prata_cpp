#include <iostream>
#include <cctype>
bool is_int(double);

int main()
{
    using namespace std;

    cout << "Enter text for analysis, and type @"
            " to terminate input.\n";
    char ch;
    int whitespace, digits, chars, punct, others;
    whitespace = digits = chars = punct = others = 0;

    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }

    return 0;
}
