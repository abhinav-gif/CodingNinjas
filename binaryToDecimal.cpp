#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0, x = 1;
    cout << "Enter number" << endl;
    cin >> n;
    while (n > 0)
    {
        ans = ans + ((n % 10) * x);
        x = x * 2;
        n = n / 10;
    }
    cout << ans << endl;
}