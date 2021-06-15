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
        int zIndx = 0, curr = 0;
        while (curr < n)
        {
            if (arr[curr] == 0)
            {
                swap(arr[zIndx], arr[curr]);
                zIndx++;
            }
            curr++;
        }
        curr = 0;
        int oneIndx = zIndx;
        while (curr < n)
        {
            if (arr[curr] == 1)
            {
                swap(arr[curr], arr[oneIndx]);
                oneIndx++;
            }
            curr++;
        }
        //sorting using two index
        // int tIndx = n - 1;
        // while (curr < n && curr <= tIndx)
        // {
        //     if (arr[curr] == 2)
        //     {
        //         swap(arr[tIndx], arr[curr]);
        //         tIndx--;
        //     }
        //     curr++;
        // }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;
    }
}