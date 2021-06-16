#include <iostream>
#include <climits>
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
        int rmax = INT_MIN, cmax = INT_MIN, rIndx, cIndx;
        //max row sum
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += arr[i][j];
            }
            if (sum > rmax)
            {
                rmax = sum;
                rIndx = i;
            }
        }
        //max col sum
        for (int i = 0; i < m; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += arr[j][i];
            }
            if (sum > cmax)
            {
                cmax = sum;
                cIndx = i;
            }
        }
        if (rmax >= cmax)
        {
            cout << "row " << rIndx << " " << rmax << endl;
        }
        else
        {
            cout << "column " << cIndx << " " << cmax << endl;
        }
    }
}