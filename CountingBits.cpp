//IO handling not done. This is the raw code and can directly be submitted to LeetCode

class Solution {
public:
    vector<int> countBits(int num) {
        int a = 1;
        vector<int> dp;
        dp.push_back(0);
        if(num == 0)
            return dp;
        dp.push_back(1);
        for(int i =2;i<=num;i++)
        {
            if(i%(1<<a) == 0)
            {
                dp.push_back(1);
                a++;
            }
            else{
                dp.push_back(dp[i-(1<<(a-1))]+1);
            }
        }
        return dp;
    }
};