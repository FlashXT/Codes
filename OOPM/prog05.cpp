// Write a program to print star forward increasing pattern.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= a; b++)
        {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}
