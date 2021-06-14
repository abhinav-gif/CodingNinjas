#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int *arr, int n, int key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        //for binary search array should be sorted
        sort(arr, arr + n);
        cout << "index:" << binary_search(arr, n, x) << endl;
    }
}