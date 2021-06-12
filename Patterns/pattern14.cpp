#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter number" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        k = i;
        for (int j = 0; j <= i; j++)
        {
            cout << k + 1 << " ";
            k--;
        }
        cout << endl;
    }
}