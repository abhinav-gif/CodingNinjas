#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str, 100);
    for (int k = 0; str[k] != '\0'; k++)
    {
        for (int i = k; str[i] != '\0'; i++)
        {
            for (int j = k; j <= i; j++)
            {
                cout << str[j];
            }
            cout << endl;
        }
    }
}