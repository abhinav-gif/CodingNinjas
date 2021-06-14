#include <iostream>
#include <bits/stdc++.h>
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
        int l = 0, r = n - 1, curr = 0;
        while (l <= r)
        {
            while (arr[r] == 1)
            {
                r--;
            }
            if (arr[curr] == 0)
            {
                curr++;
                l++;
            }
            else
            {
                swap(arr[curr], arr[r]);
                l++;
                r--;
            }
        } //print sorter arrar
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}