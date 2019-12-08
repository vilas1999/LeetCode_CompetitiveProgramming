#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int slow = 0;
    int l = 0, g = 0;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = slow; j < i; j++)
        {
            if (s[i] == s[j])
            {
                slow = j + 1;
            }
        }
        l = ((i + 1) - slow);
        g = max(l, g);
    }
    cout << g << endl;
}