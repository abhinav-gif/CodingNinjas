#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    int a = 0, b = 1;
    bool isFib = false;
    while (n >= a)
    {
        if (n == a)
        {
            isFib = true;
        }
        int c = a + b;
        a = b;
        b = c;
    }
    if (isFib)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}