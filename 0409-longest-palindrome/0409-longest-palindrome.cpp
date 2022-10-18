class Solution {
public:
    int longestPalindrome(string s) {
    unordered_map<char,int> mp;
    
    for( auto i : s ) mp[i]++;
    
    int ans = 0;
    int odd = 0;
    for( auto it : mp ){
        if( it.second%2 == 0 ) ans += it.second; // if we find even characters
        else {
            // we found an odd character
            odd = 1;
            if( it.second > 1 ) ans += it.second-1; // suppose we have 3 odd characters then we add 2                                                            of them to the string 
        }
    }
    return ans + odd;
}
        

};