#include <iostream>
using namespace std;

int length(char *str)
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
    cin.getline(str, 100);
    int curr = length(str) - 1;
    while (curr >= 0)
    {
        if (str[curr] == ' '||curr==0)
        {if(curr==0){
            curr--;
        }
            for (int i = curr+1; str[i] != '\0'; i++)
            {
                cout << str[i];
            }cout<<" ";
            str[curr] = '\0';
        }
        curr--;
    }
}