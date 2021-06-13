#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, input, max = INT_MIN, s_max = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (i == 0)
        {
            max = input;
            s_max = input;
        }
        else
        {
            if (input > max)
            {
                s_max = max;
                max = input;
            }
            else if (input > s_max && input != max)
            {
                s_max = input;
            }
        }
    }
    if (s_max == max)
    {
        cout << INT_MIN << endl;
    }
    else
    {
        cout << s_max << endl;
    }
}