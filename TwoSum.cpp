#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input, value;
    cin >> value;
    vector<int> nums;
    vector<int> ans;
    while (cin >> input)
    {
        nums.push_back(input);
    }
    map<int, int> mp;
    int j = 0;
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        mp.insert({*i, j++});
    }
    int k = 0;
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        auto itr = mp.find(value - *i);
        if ((itr != mp.end()) && (itr->second != k))
        {
            cout << *i << "fg" << itr->first << endl;
            cout << k << " " << itr->second << endl;
        }
        k++;
    }

    return 0;
}