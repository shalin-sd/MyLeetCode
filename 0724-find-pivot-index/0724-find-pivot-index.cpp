class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
        int ls=accumulate(nums.begin(),nums.begin()+i,0);
        int rs=accumulate(nums.begin()+i+1,nums.end(),0);
        
            if(ls==rs)
            return i;
        }
        return -1;
        
    }
};