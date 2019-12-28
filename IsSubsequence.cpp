//IO handling not done. This is the raw code and can directly be submitted to LeetCode


class Solution {
public:
    bool isSubsequence(string s, string t) {

                    int a = 0;
        for(int i=0;i<s.length();i++)
        {

            while(t[a] != s[i])
            {
                a++;
                if(a >= t.length())
                    return false;
            }
            a++;
        }
        return true;
    }
};