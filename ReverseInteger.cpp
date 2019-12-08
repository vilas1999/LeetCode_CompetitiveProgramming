#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int b = x;
    if (x < 0)
        cout << false;
    int ans = 0;
    while (x != 0)
    {
        int a = x % 10;
         if(ans > (2147483647/10) || ans < (-2147483647/10) ){
            return false;
        }
        ans = (ans * 10) + a;
        x = x / 10;
    }
    cout << ans << endl;
    if(ans == x)
        cout << true;
    else
    {   
            cout <<"dg"<< false;
    }
    
    return 0;
}