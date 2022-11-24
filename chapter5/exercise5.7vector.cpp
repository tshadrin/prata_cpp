#include <iostream>
#include <vector>
#include <string>

struct car
{
    std::string name {};
    int release_year {};
};

int main()
{
    using namespace std;

    cout << "How many cars do you wish to catalog? ";
    int count = 1;
    cin >> count;
    auto * catalog  = new vector<car>;
    for(int i = 0; i < count; i++) {
        cout << "Auto #" << i + 1 << endl;
        cout << "Enter car model name: " << endl;
        cin.get();
        string tmp_name;
        getline(cin, tmp_name);
        cout << "Enter car release date:" << endl;
        int tmp_year;
        cin >> tmp_year;
        catalog->push_back(car {tmp_name, tmp_year});
    }

    for (auto &car : *catalog) {
        cout << car.release_year << " " << car.name << std::endl;
    }

    delete catalog;

    return 0;
}