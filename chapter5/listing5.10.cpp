#include <iostream>

int main()
{
    using namespace std;

    int quizscores[10] = { 20,20,20,20,20,19,20,18,20,20 };
    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20; i++) {
        cout << "quiz " << i << " is a 20\n";
    }
    //у меня компилятор автоматически исправил цикл.
    //+ цикл подсвечивается в Clion
    cout << "Doing it dangerously wrong: \n";
    for (i = 0; quizscores[i] = 20; i++) {
        cout << "quiz " << i << " is a 20\n";
    }
    //что подтверждается вызовом следующей строки
    cout << "Check whill cicle has been finished" << endl;
    return 0;
}