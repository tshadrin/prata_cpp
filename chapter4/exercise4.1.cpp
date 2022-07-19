#include <iostream>

int main()
{
    using namespace std;

    cout << "What is your first name?";
    string f_name;
    getline(cin, f_name);
    cout << "What is your last name?";
    string l_name;
    getline(cin, l_name);
    cout << "What letter grade do you deserve?";
    char grade;
    cin >> grade;
    if (grade != 'A' && grade != 'B' && grade != 'C') {
        cout << "Letter must be A or B or C";
        return -1;
    }
    cout << "Whar is your age?";
    int age;
    cin >> age;
    cout << "Name: " << l_name << ", " << f_name << endl;
    cout << "Grade: " << (char)(grade - 1) << endl;
    cout << "Age: " << age << endl;

    ;
    return 0;
}