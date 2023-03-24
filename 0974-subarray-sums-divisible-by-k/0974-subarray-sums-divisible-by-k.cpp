class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]++;
        int curr_sum=0,ans=0,mod;
        for(auto x:nums){
            curr_sum+=x;
            mod=(curr_sum%k+k)%k;
            if(mp.find(mod)!=mp.end()){
                ans+=mp[mod];
            }
            mp[mod]++;
        }
        return ans;
    }
};