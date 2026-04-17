// This program displays a triangle made up of + symbols
#include <iostream>
using namespace std;
int main()
{
    int row = 10;
    // First pattern increments until there are 10 rows
    for (int a = 1; a <= row; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout << "+ ";
        }
        cout << endl;
    }
    // Second pattern decrements until the final row is 1
    for (int a = row - 1; a >= 1; a--)
    {
        for (int b = 1; b <= a; b++)
        {
            cout << "+ ";
        }
        cout << endl;
    }
    return 0;
}