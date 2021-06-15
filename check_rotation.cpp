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
        bool isDecreasing = false;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                isDecreasing = true;
                cout << "Rotation: " << i + 1 << endl;
                break;
            }
        }
        if (!isDecreasing)
        {
            cout << "0" << endl;
        }
        delete[] arr;
    }
}