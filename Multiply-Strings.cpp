// https://oj.leetcode.com/problems/multiply-strings/


class Solution {
public:
    string add(string s1,string s2)
    {
        string ret="";
        int flag=0;
        int len1=s1.length(),len2=s2.length();
        int i=0,j=0;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        while(i<len1 && j<len2)
        {
            flag+=(s1[i]-'0')+(s2[j]-'0');
            ret+=char(flag%10+'0');
            flag/=10;
            i++;j++;
        }
        while(i<len1)
        {
            flag+=(s1[i]-'0');
            ret+=char(flag%10+'0');
            flag/=10;
            i++;
        }
        while(j<len2)
        {
            flag+=(s2[j]-'0');
            ret+=char(flag%10+'0');
            flag/=10;
            j++;
        }
        if(flag) ret+=char(flag+'0');
        reverse(ret.begin(),ret.end());
        return ret;
    }
    string domul(string s1, char s2)
    {
        int b=s2-'0';
        string ret="";
        reverse(s1.begin(),s1.end());
        int len1=s1.length(),flag=0;
        for(int i=0;i<len1;i++)
        {
            int a=s1[i]-'0';
            flag+=a*b;
            ret+=char(flag%10+'0');
            flag/=10;
        }
        if(flag) ret+=char(flag+'0');
        reverse(ret.begin(),ret.end());
        return ret;
    }
    string mul(string s1, string s2)
    {
        if(s1=="0" || s2=="0") return "0";
        if(s1.length()<s2.length())
        {
            string tmp=s1;
            s1=s2;
            s2=tmp;
        }
        reverse(s2.begin(),s2.end());
        string ans="";
        for(int i=0;i<s2.length();i++)
        {
            string ss=domul(s1,s2[i]);
            for(int j=0;j<i;j++)
                ss+=char('0');
            ans=add(ans,ss);
        }
        return ans;
    }
    string multiply(string num1, string num2) {
        return mul(num1,num2);
    }
};
