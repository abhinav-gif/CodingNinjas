#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, count = 0;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> x;
        sort(arr, arr + n);
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            if (arr[start] + arr[end] == x)
            {
                count++;
                start++;
                end--;
            }
            else if (arr[start] + arr[end] > x)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        cout << count << endl;
    }
}