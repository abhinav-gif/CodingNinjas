#include<iostream>
#include<bits/stdc++.h>
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
        int x, count = 0;
        cin >> x;
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && arr[i] == arr[i - 1]) // avoid duplicate triplets count
                continue;
            int l = i + 1, r = n - 1;
            int target = x - arr[i];
            while (l < r)
            {
                int sum = arr[i] + arr[l] + arr[r];
                if (sum > x)
                {
                    r--;
                }
                else if (sum < x)
                {
                    l++;
                }
                else
                {
                    count++;
                    while (l < n - 1 && arr[l] == arr[l + 1])
                    {
                        l++;
                    }
                    while (r > 0 && arr[r] == arr[r - 1])
                    {
                        r--;
                    }
                    r--;
                    l++;
                }
            }
        }
        delete[] arr;
        cout<<count<<endl;
    }
    
}