#include <iostream>
using namespace std;

int main()
{
    int n;
    char k;
    cout << "Enter number" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        k = 'A' + n-1-i;
        for (int j = 0; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}