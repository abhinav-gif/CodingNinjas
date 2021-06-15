#include <iostream>
using namespace std;

int length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

bool checkPalindrome(char str[])
{
    int s = 0, l = length(str)-1;
    while(s<=l){
        if(str[s]!=str[l]){
            return false;
        }
        s++;
        l--;
    }return true;
}

int main()
{
    char str[100];
    cin >> str;
    if (checkPalindrome(str))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}