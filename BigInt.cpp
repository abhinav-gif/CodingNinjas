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
        int result_size = max(n, m) + 1;
        int curr = result_size - 1;
        int *result = new int[result_size];
        //intializing result with 0
        for (int i = 0; i < result_size; i++)
        {
            result[i] = 0;
        }
        int i = n - 1, j = m - 1, carry = 0;
        while (i >= 0 && j >= 0)
        {
            int sum = arr1[i] + arr2[j] + carry;
            if (sum > 9)
            {
                carry = 1;
                result[curr] = sum % 10;
                curr--;
            }
            else
            {
                result[curr] = sum;
                carry = 0;
                curr--;
            }
            i--;
            j--;
        }
        //remaining array
        while (i >= 0)
        {
            int sum = arr1[i] + carry;
            if (sum > 9)
            {
                result[curr] = sum % 10;
                carry = 1;
            }
            else
            {
                result[curr] = sum;
                carry = 0;
            }
            curr--;
            i--;
        }
        while (j >= 0)
        {
            int sum = arr2[j] + carry;
            if (sum > 9)
            {
                result[curr] = sum % 10;
                carry = 1;
            }
            else
            {
                result[curr] = sum;
                carry = 0;
            }
            curr--;
            j--;
        }
        if (carry == 1)
        {
            result[0] = 1;
        }
        //print result array
        for (int i = 0; i < result_size; i++)
        {
            if (i == 0 && result[i] == 0)
            {
                continue;
            }
            cout << result[i] << " ";
        }
        cout << endl;
        delete[] arr1;
        delete[] arr2;
        delete[] result;
    }
}