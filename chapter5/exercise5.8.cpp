#include <iostream>
#include <cstring>

unsigned charSize = 1000;

int main()
{
    using namespace std;

    char word[charSize];

    cout << "Enter words (for exit type 'done'): " << endl;

    int word_count = 0;

    do {
        cin >> word;
    } while (strcmp(word, "done") != 0 && ++word_count);

    cout << "You entered " << word_count << " words." << endl;

    return 0;
}