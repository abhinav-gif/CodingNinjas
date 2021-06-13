#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int start = 0, end = n - 1, val = 1;
        while (start <= end)
        {
            arr[start] = val;
            if (start == end)
            {
                break;
            }
            arr[end] = val + 1;
            val += 2;
            start++;
            end--;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}