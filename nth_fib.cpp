#include <iostream>
using namespace std;

int fib(int n)
{
    int a = 0, b = 1;
    int c;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    cout << "Nth fib is " << fib(n) << endl;
}