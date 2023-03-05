class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int a,b;
        set<int>s(nums.begin(),nums.end());
        a=s.size();
        b=nums.size();
        if(a==b)
            return false;
        return true;
    }
};