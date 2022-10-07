#include <iostream>
#include <ctime>

int main()
{
    using namespace std;

    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;

    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    //cout << start << " " << delay << endl;

    while(clock() - start < delay) {
        ;
    }
    //cout << clock();
    cout << "done \a\n";
    return 0;
}