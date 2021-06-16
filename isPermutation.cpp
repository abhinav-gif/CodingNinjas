#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    char str1[100];
    cin >> str1;
    sort(str1, str1 + strlen(str1));
    char str2[100];
    cin >> str2;
    sort(str2, str2 + strlen(str2));
    if (strlen(str1) != strlen(str2))
    {
        cout << "False" << endl;
        return 0;
    }
    int i = 0, j = 0;
    while (str1[i] != '\0' && str2[j] != '\0' && str1[i] == str2[j])
    {
        i++;
        j++;
        if (str1[i] != str2[j])
        {
            cout << "False" << endl;
            return 0;
        }
    }
    cout << "True" << endl;
}