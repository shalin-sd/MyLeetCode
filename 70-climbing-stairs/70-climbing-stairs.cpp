class Solution {
public:
    int climbStairs(int n) {
        int prev=2,prev2=1,res;
         if (n<2)
           return n;
       
        else // there is none left
           for(int i=3;i<=n;i++){
            res = prev + prev2;
            prev2 = prev;
            prev = res;
           }
        return res;
    }
};