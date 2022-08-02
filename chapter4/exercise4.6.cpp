#include <iostream>
#include <string>

struct CandyBar
{
    std::string name;
    double weight;
    int callories;
};

int main()
{
    CandyBar cb[3] =
            {
                    {"Mocha Munch", 2.3, 350},
                    {"Something wrong", 4.4, 300},
                    {"Another more", 3, 200}
            };

    std::cout << "cb[0] name is " << cb[0].name
              << ", cb[0] weight is " << cb[0].weight
              << ", cb[0] callories is " << cb[0].callories << std::endl;
    std::cout << "cb[1] name is " << cb[1].name
              << ", cb[1] weight is " << cb[1].weight
              << ", cb[1] callories is " << cb[1].callories << std::endl;
    std::cout << "cb[2] name is " << cb[2].name
              << ", cb[2] weight is " << cb[2].weight
              << ", cb[2] callories is " << cb[2].callories << std::endl;
    return 0;
}