#include <iostream>
using namespace std;

int main()
{
    int n, c, sum = 0, product = 1;
    cout << "enter number " << endl;
    cin >> n >> c;
    // enter choice 1 --> sum
    // 2 --> product

    if (c == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        cout << sum << endl;
    }
    else if (c == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            product = product * i;
        }
        cout << product << endl;
    }
    else
    {
        cout << "-1" << endl;
        }
}