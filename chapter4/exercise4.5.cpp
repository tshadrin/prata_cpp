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
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    std::cout << "Snack name is " << snack.name
              << ", snack weight is " << snack.weight
              << ", snack callories is " << snack.callories << std::endl;
    return 0;
}