class Solution {
public:
    int fib(int n) {
     int prev = 2, prev2 = 1, res;
        if(n==0) return 0;
        if(n==1)return 1;
        else
        return fib(n-1)+fib(n-2);
    }
};