#include <iostream>
using namespace std;

int main()
{
    int s, e, w, celcius;
    cin >> s >> e >> w;
    for (int i = s; i <= e; i = i + w)
    {
        celcius = ((i - 32) * 5) / 9;
        cout << i << "\t" << celcius << endl;
    }
}