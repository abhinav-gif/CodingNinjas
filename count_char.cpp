#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "enter string " << endl;
    getline(cin, str);
    int ch = 0, spaces = 0, num = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '$')
        {
            break;
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            ch++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            num++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
    }
    cout << ch << " " << num << " " << spaces << endl;
}