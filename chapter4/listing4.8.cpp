//
// Created by Анатолий Шадрин on 16.05.22.
//
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string s1 = "penguin";
    string s2, s3;

    // вы можете присвоить один строковый объект другому(дословно)
    cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;

    // вы можете присвоить строку в стиле Си строковому объекту
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;

    return 0;
}