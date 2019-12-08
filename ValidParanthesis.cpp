#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s1;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            s1.push(s[i]);
        }

        else
        {
            if(s1.empty())
            cout << false;
            if (((s[i] == ']') && (s1.top() == '[')) || ((s[i] == ')') && (s1.top() == '(')) || ((s[i] == '}') && (s1.top() == '{')))
            {
                s1.pop();
            }
            else
            {
                cout << "False avad" << endl;
            }
            
           
            
        }
    }
    cout << s1.empty();

    return 0;
}