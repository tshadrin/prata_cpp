#include <iostream>

int main()
{
    using namespace std;

    int higgens {5};
    int * pt = &higgens;

    cout << "Value of higgens = " << higgens;
    cout << " ; Address of higgens = " << &higgens << endl;

    cout << "Value of *pt = " << *pt;
    cout << "; Address of pt = " << pt << endl;

    return 0;
}