#include <iostream>
using namespace std;

void removeDup(char *str)
{
    int i = 1, j = 0;
    while (str[i])
    {
        if (str[j] != str[i])
        {   j++;
            str[j] = str[i];
        }i++;
        
    }j++;
    str[j] = '\0';
}

int main()
{
    char str[100];
    cin >> str;
    removeDup(str);
    cout << str;
}