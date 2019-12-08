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
    int num = 0;
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        num = (num * 10) + *i;
    }

    num++;

    vector<int> num2;
    while (num != 0)
    {
        num2.insert(num2.begin(), num % 10);
        num = num /10;
    }
/*     for (auto i = num2.begin(); i != num2.end(); i++)
    {
        cout << *i << endl;
    } */
    return num2;
    return 0;
}
