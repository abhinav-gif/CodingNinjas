#include <iostream>
#include <vector>
#include <bits\stdc++.h>
using namespace std;

void smallerK(vector<int> &v, int k)
{
    for (int &i:v)
    {
        if (i >= k)
        {
            v.erase(remove(v.begin(), v.end(), i), v.end());
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    int k;
    cin >> k;
    smallerK(v, k);
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}