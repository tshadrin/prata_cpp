#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::cout << "Enter a list of words followed by end-of-file: ";
    typedef std::vector<std::string>::size_type vector_sz;
    std::vector<std::string> words;
    std::string word;
    while (std::cin >> word) {
        words.push_back(word);
    }

    vector_sz size = words.size();
    if (size == 0) {
        std::cout << "Please enter some words!";
        return -1;
    }

    std::vector<int> frequency;
    std::vector<std::string> unique_words;
    int count = 0;
    bool isUnique;

    unique_words.push_back(words[0]);

    for(unsigned i = 0; i < words.size(); ++i) {
        isUnique = true;

        for (unsigned j = 0; j < unique_words.size(); ++j) {
            if (words[i] == unique_words[j]) {
                isUnique = false;
            }
        }

        if(isUnique) {
            unique_words.push_back(words[i]);
        }
    }

    for (unsigned i = 0; i < unique_words.size(); ++i) {
        for (unsigned j = 0; j < words.size(); ++j) {
            if (unique_words[i] == words[j]) {
                count += 1;
            }
        }
        frequency.push_back(count);
        count = 0;
    }

    for (unsigned i = 0; i < unique_words.size(); ++i) {
        std::cout << unique_words[i] << "  " << frequency[i] << std::endl;
    }

    return 0;
}