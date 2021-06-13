#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, x = 1;
    cout << "Enter number" << endl;
    cin >> n;
    while (n > 0)
    {
        ans = ans + (n % 2) * x;
        x = x * 10;
        n = n / 2;
    }
    cout << ans << endl;
}