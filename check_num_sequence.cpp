#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, curr, prev = INT_MAX;
    bool isDecreasing = true, ans = true;
    cout << "Enter number of inputs " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        if (prev == curr)
        {
            ans = false;
        }
        if (isDecreasing)
        {
            if (curr > prev)
            {
                isDecreasing = false;
            }
        }
        else
        {
            if (curr < prev)
            {
                ans = false;
            }
        }

        prev = curr;
    }

    if (ans)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}