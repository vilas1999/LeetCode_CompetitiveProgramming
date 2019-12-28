//IO handling not done. This is the raw code and can directly be submitted to LeetCode

class Solution {
public:
    bool divisorGame(int N) {
     
        bool ans = false;
        while(N!=1)
        {
            int i =N-1;
            for( i = N-1;i>0;i--)
            {
                if(N%i == 0)
                break;
            }
                N = N-i;
             ans  = !(ans);
           
            
        }
        return (ans);
        
    }
};