#include <iostream>
using namespace std;
int main()
{
    int n, k = 1;
    cout << "Enter number" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int spaces = 0; spaces < n - i-1; spaces++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {   while(k>=10){
            k=k%10+k/10;
        }
            cout << k<<" ";
            k++;
        }
        cout << endl;
    }
}