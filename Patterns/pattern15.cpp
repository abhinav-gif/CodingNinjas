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
        k = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}