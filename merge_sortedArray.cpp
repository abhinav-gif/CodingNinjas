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
        int *arr1 = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        int m;
        cin >> m;
        int *arr2 = new int[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        int *result = new int[n + m];
        int i = 0, j = 0, curr = 0;
        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
            {
                result[curr] = arr1[i];
                i++;
            }
            else if (arr1[i] > arr2[j])
            {
                result[curr] = arr2[j];
                j++;
            }
            else
            {
                result[curr] = arr1[i];
                i++;
            }
            curr++;
        }
        while (i < n)
        {
            result[curr] = arr1[i];
            i++;
            curr++;
        }
        while (j < m)
        {
            result[curr] = arr2[j];
            j++;
            curr++;
        }
        for (int i = 0; i < n + m; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
        delete[] arr1;
        delete[] arr2;
    }
}