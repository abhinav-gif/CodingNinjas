#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, len = 0;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_ = INT_MIN;
    int *res = new int[n];
    for (int i = n - 1,j=0; i >= 0; i--)
    {
        if (arr[i] >= max_)
        {
            max_ = arr[i];
            res[j] = arr[i];
            j++;
            len++;
        }
    }
    for (int i = len-1; i >=0; i--)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] res;
    cout << endl;
}