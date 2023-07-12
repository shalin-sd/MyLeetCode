class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> ans;
        if(n==1)
        {
            return {{1}};
        }
        
       
         vector<int> t;
        for(int i=0; i<n; i++) // 1
        {
            if(i==0)
            t.push_back(1); //1
            for(int j=0; j<i; j++)
            {
                if(j==0)
                {
                    t.push_back(1) ;
                }
                
                else if(j>0)
                {
                    t.push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
                
        
                
            }
            
            if(i>0)
            t.push_back(1);
            // cout<<endl;
            ans.push_back(t);
            t.clear();
            
        }
        
        return ans;
        
    }
};