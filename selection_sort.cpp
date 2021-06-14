#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mySwap(int *a, int &b)
{
    int temp = *a;
    *a = b;
    b = temp;
}

void selection_sort(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        int min_ = INT_MAX, min_index;
        for (int j = i; j < n; j++)
        {
            if (min_ > arr[j])
            {
                min_ = arr[j];
                min_index = j;
            }
        }
        mySwap(&arr[min_index], arr[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    //print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}