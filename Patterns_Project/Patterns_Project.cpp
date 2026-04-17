// This program displays a triangle made up of + symbols
#include <iostream>
using namespace std;
int main()
{
    int row = 10;
    for (int a = 1; a <= row; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout << "+ ";
        }
        cout << endl;
    }
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