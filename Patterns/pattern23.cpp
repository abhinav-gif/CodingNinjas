#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int spaces = 0; spaces < n - i; spaces++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        k = i;
        for (int l = 0; l < i; l++)
        {
            cout << k << " ";
            k--;
        }
        cout << endl;
    }
}