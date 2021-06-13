#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter number" << endl;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        int ap = 3 * i + 2;
        if (ap % 4 != 0)
        {
            cout << ap << endl;
        }
        else
        {
            x++;
        }
    }
}