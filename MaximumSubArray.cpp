#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int l = 0, g = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        l = max(l+nums[i],nums[i]);
        if (g < l)
        {

            g = l;
        }
    }

    cout << g << endl;
    return 0;
}