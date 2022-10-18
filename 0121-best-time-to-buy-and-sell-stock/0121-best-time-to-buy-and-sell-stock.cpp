class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int max_pf=0;
        for(int i=0;i<prices.size();i++){
           mini=min(mini,prices[i]);
            max_pf=max(max_pf,prices[i]-mini);
                
}
        return max_pf;
    }
};