#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    if (nums.empty())
    {
        return 0;
    }
    int count = 0;
    for (auto i = nums.begin(); (i + 1) != nums.end();)
    {
        int c = 0;
        while (*i == *(i + 1))
        {
            
            for (auto j = (i + 1); (j + 1) != nums.end(); j++)
            {
                *j = *(j + 1);
            }
            nums.pop_back();
        }
        count++;
        i++;
    }

    return count;
    return 0;
}