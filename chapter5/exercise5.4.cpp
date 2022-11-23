#include <iostream>

int main()
{
    using namespace std;

    int i = 0;
    double dafna_balance = 100.0;
    double dafna_start_balance = 100.0;
    double cleo_balance = 100.0;
    while (dafna_balance >= cleo_balance)
    {
        i++;
        dafna_balance = dafna_balance + dafna_start_balance * 0.1;
        cleo_balance = cleo_balance + cleo_balance * 0.05;
        cout << "Dafna balance after " << i << " years = " << dafna_balance << "$" << endl;
        cout << "Cleo balance after " << i << " years = " << cleo_balance << "$" << endl;
    }
    cout << "After " << i << " years Cleo's balance(" << cleo_balance << "$) exceeded Dafna's(" << dafna_balance << "$)" << endl;
    return 0;
}