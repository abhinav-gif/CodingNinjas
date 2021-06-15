#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cin >> str;
    char x, a;
    cin >> a >> x;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == a)
        {
            str[i] = x;
        }
        i++;
    }
    cout << str << endl;
}