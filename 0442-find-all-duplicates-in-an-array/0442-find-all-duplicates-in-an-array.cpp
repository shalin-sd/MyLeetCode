class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            if(x.second==2){
                ans.push_back(x.first);
}
                
}
        return ans;
    }
};