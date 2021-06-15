#include <iostream>
using namespace std;

int len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[100];
    cout << "Enter string: " << endl;
    //use cin.getline to get input with spaces
    cin.getline(str, sizeof(str));
    cout << len(str) << endl;
}