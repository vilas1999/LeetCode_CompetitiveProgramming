#include <bits/stdc++.h>
using namespace std;

/* int steps(int n)
{
    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n - 1];
} */

int recursive(int n, int *dp)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (dp[n] > 0)
        return dp[n];
    else
    {
        int ans = recursive(n - 1, dp) + recursive(n - 2, dp);
        dp[n] = ans;
        return ans;
    }
}
int main()
{
    int n;
    cin >> n;
    int dp[n+1];
    for (int i = 0; i < n+1; i++)
    {
        dp[i] = 0;
    }

    int ans = recursive(n, dp);
    cout << ans;
    return 0;
}