#include <iostream>
#include <climits>
using namespace std;

char occurence(char *str)
{
    int freq[26];
    //intializing with 0
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        int index = str[i] - 'a';
        freq[index]++;
    }
    int max = INT_MIN, maxIndex = -1;
    for (int i = 0; i < 26; i++)
    {
        if (max < freq[i])
        {
            max = freq[i];
            maxIndex = i;
        }
    }
    return maxIndex + 'a';
}

int main()
{
    char str[100];
    cin >> str;
    cout << occurence(str) << endl;
}