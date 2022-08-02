#include <iostream>
#include <string>

struct PizzaCompany
{
    std::string name;
    double weight;
    double diameter;
};

int main()
{
    PizzaCompany nc;

    std::cout << "Enter company name: ";
    std::getline(std::cin, nc.name);
    std::cout << "Enter pizza diameter: ";
    std::cin >> nc.diameter;
    std::cout << "Enter pizza weight: ";
    std::cin >> nc.weight;

    std::cout << "Company name is " << nc.name
    << ", company pizza diameter is " << nc.diameter
    << ", company pizza weight is " << nc.weight
    << std::endl;
    return 0;
}