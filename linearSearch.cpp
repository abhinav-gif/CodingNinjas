#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> x;
        int i = 0;
        for (; i < n; i++)
        {
            if (arr[i] == x)
            {
                cout << i << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << "-1" << endl;
        }
        delete []arr;
    }
}