#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int spaces = 1; spaces <= n - i; spaces++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (int i = (n + 1) / 2; i >= 1; i--)
    {
        for (int spaces = 1; spaces <= n - i; spaces++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}