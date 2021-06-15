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
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int k;
        cin >> k;
        //rotate array by k
        int *temp = new int[k];
        //initialize temp
        for (int i = 0; i < k; i++)
        {
            temp[i] = arr[i];
        }
        for (int i = k, curr = 0; i < n; i++, curr++)
        {
            arr[curr] = arr[i];
        }
        for (int i = n - k, j = 0; i < n; i++, j++)
        {
            arr[i] = temp[j];
        }
        //print rotated array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
        delete[] temp;
    }
}