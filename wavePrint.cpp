#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int j = 0;
        while (j < m)
        {
            int i = 0;
            while (i < n)
            {
                cout << arr[i][j] << " ";
                i++;
            }
            i = n - 1;
            j++;
            if (j >= m)
            {
                break;
            }
            while (i >= 0)
            {
                cout << arr[i][j] << " ";
                i--;
            }
            j++;
        }
        cout << endl;
    }
}