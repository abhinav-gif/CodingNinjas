#include <iostream>
#include <climits>
using namespace std;

void minLenWord(char *str)
{
    int len = 0, minLen = INT_MAX, startIndex = 0,i=0;
    for (; str[i] != '\0'; i++)
    {

        if (str[i] == ' ')
        {
            if (len < minLen)
            {
                minLen = len;
                startIndex = i - len;
            }
            len = 0;
        }
        else
        {
            len++;
        }
        
    } if (len < minLen)
            {
                minLen = len;
                startIndex = i - len;
            }
    for (int i = startIndex; str[i] != ' ' && str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    cout << endl;
}

int main()
{
    char str[100];
    cin.getline(str,100);
    minLenWord(str);
}