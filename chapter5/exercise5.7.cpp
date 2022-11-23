#include <iostream>
#include <array>
#include <string>

int arSize = 12;

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
    car * catalog = new car[count];
    for(int i = 0; i < count; i++) {
        cout << "Auto #" << i + 1 << endl;
        cout << "Enter car model name: " << endl;
        string tmp_name;
        int tmp_year;
        cin.get();
        getline(cin, tmp_name);
        cout << "Enter car release date:" << endl;
        cin >> tmp_year;
        catalog[i] = {tmp_name, tmp_year};
    }

    for (int i = 0; i<count; i++) {
        cout << catalog[i].name << " " << catalog[i].release_year << endl;
    }

    delete[] catalog;

    return 0;
}