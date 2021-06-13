#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cout << "Enter number" << endl;
    cin >> n;
    while (n > 0)
    {
        ans = ans * 10 + n % 10;
        n = n / 10;
    }
    cout << ans << endl;
}