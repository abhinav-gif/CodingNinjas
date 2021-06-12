#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    // using for loop
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    //using while loop
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}