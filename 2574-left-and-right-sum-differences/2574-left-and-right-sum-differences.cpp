class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int sum =0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
        int ls=accumulate(nums.begin(),nums.begin()+i,0);
        int rs=accumulate(nums.begin()+i+1,nums.end(),0);
            ans.push_back(abs(ls-rs));
        }
        return ans;
            
        }
    };
