#include <iostream>
using namespace std;

int floor_sqrt(int n)
{
    int start = 1, end = n, ans;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (mid == n / mid)
        {
            return mid;
        }
        if (mid < n / mid)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number " << endl;
    cin >> n;
    cout << floor_sqrt(n) << endl;
}