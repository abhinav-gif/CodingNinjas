#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, sum_range = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1)
            {
                sum_range += i;
            }
            cin >> arr[i];
            sum += arr[i];
        }
        cout << sum - sum_range << endl;
    }
}