class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0,left=0,right=n-1,bottom=m-1;
        while(top<=bottom &&left<=right){
            for(int i=left;i<=right && top<=bottom;i++){
                result.push_back(matrix[top][i]);
            }
            top++;

        for(int i=top;i<=bottom && left<=right;i++){
            result.push_back(matrix[i][right]);
            
}
            right--;
        for (int i=right; i>=left && top<=bottom; i--) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
            for (int i=bottom; i>=top && left<=right; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;
    }
        return result;
    }
};