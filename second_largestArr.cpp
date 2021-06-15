#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, max = INT_MIN, s_max = INT_MIN;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
    {
        int input=arr[i];
        if (i == 0)
        {
            max = input;
            s_max = input;
        }
        else
        {
            if (input > max)
            {
                s_max = max;
                max = input;
            }
            else if (input > s_max )
            {
                s_max = input;
            }
        }
    }
    if (s_max == max)
    {
        cout << INT_MIN << endl;
    }
    else
    {
        cout << s_max << endl;
    }
        delete[] arr;
    }
}