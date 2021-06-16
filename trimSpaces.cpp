#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str, 100);
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
           str[j++] = str[i];
        i++;
    }
    str[j] = '\0';
    cout << str << endl;
}