#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        int j = 0;
        for (; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        for (int star = 0; star < 2 * (n - i); star++)
        {
            cout << "* ";
        }
        for (int k = j; k >= 1; k--)
        {
            cout << k << " ";
        }

        cout << endl;
    }
}