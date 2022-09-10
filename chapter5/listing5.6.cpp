#include <iostream>
#include <string>
int main()
{
    using namespace std;

    cout << "Enter a word: ";
    string word;
    cin >> word;

    //size_t ведет себя некорректно, тогда лучше
    //сделать так
    //for (size_t i = word.size(); i > 0; i--) {
    //    cout << word[i-1];
    //}
    for (int i = word.size() - 1; i >= 0; i--) {
        cout << word[i];
    }
    cout << "\nBye.\n";
    return 0;
}