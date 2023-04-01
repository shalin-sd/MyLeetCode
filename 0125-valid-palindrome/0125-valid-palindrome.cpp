class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string t="";
       for(int i=0;i<n;i++)
       {
           if(isalnum(s[i]))
           {
               s[i]=tolower(s[i]);
               t+=s[i];
           }
} 
        s=t;
        reverse(t.begin(),t.end());
        if(s==t)
            return true;
        else
            return false;
    }
};