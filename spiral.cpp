#include <iostream>
using namespace std;

int main()
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

    int sRow = 0, eRow = n - 1, sCol = 0, eCol = m - 1;
    while (sRow <= eRow && sCol <= eCol)
    {
        for (int i = sCol; i <= eCol; i++)
        {
            cout << arr[sRow][i] << " ";
        }
        sRow++;
        for (int i = sRow; i <= eRow; i++)
        {
            cout << arr[i][eCol] << " ";
        }
        eCol--;
        if (sRow <= eRow && sCol <= eCol)
        {
            for (int i = eCol; i >= sCol; i--)
            {
                cout << arr[eRow][i] << " ";
            }
            eRow--;
        }
        if (sRow <= eRow && sCol <= eCol)
        {
            for (int i = eRow; i >= sRow; i--)
            {
                cout << arr[i][sCol] << " ";
            }
            sCol++;
        }
    }
}