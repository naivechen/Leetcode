// https://oj.leetcode.com/problems/longest-common-prefix/


class Solution {
    
public:
    string check(string s1,string s2)
    {
        int i=0,j=0;
        int len1=s1.length(),len2=s2.length();
        string ans="";
        while(i<len1 && j<len2)
        {
            if(s1[i]==s2[j]) ans+=s1[i];
            else return ans;
            i++;j++;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string> &strs) {
        int len=strs.size();
        string ans="";
        if(len==0) return ans;
        ans=strs[0];
        for(int i=1;i<len;i++)
        {
            ans=check(ans,strs[i]);
            if(ans.length()==0) return ans;
        }
        return ans;
    }
};
