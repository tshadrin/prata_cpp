#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string word {};

    cout << "Enter words (for exit type 'done'): " << endl;

    int word_count = 0;

    do {
        cin >> word;
    } while (word != "done" && ++word_count);

    cout << "You entered " << word_count << " words." << endl;

    return 0;
}