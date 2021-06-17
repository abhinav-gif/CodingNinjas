#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    cin >> str;
    sort(str, str + strlen(str));
    int j = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;
        while (str[i] != '\0' && str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        if (count > 1)
        {
            char ch = 48 + count;
            str[j - 1] = str[i];
            str[j] = ch;
            j = j + 2;
        }else{
            str[j-1]=str[i];
            j++;
        }
    }
    str[j-1] = '\0';
    cout << str << endl;
}