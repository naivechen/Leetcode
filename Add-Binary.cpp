// https://oj.leetcode.com/problems/add-binary/ 

class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int flag = 0;
        int lena = a.length(), lenb = b.length() , i = 0, j = 0;
        string ans="";
        while(i<lena && j<lenb)
        {
            if(a[i] == '1') flag++;
            if(b[j] == '1') flag++;
            if(flag == 0) ans+='0';
            else if(flag == 1) ans+='1',flag = 0;
            else if(flag == 2) ans+='0',flag = 1;
            else if(flag == 3) ans+='1',flag = 1;
            i++;
            j++;
        }
        while(i<lena)
        {
            if(a[i] == '1') flag++;
            if(flag == 0) ans+='0';
            else if(flag == 1) ans+='1',flag = 0;
            else if(flag == 2) ans+='0',flag = 1;
            else if(flag == 3) ans+='1',flag = 1;
            i++;
        }
        while(j<lenb)
        {
            if(b[j] == '1') flag++;
            if(flag == 0) ans+='0';
            else if(flag == 1) ans+='1',flag = 0;
            else if(flag == 2) ans+='0',flag = 1;
            else if(flag == 3) ans+='1',flag = 1;
            j++;
        }
        while(flag)
        {
            if(flag == 1) ans+='1',flag = 0;
            else if(flag == 2) ans+='0',flag = 1;
            else if(flag == 3) ans+='1',flag = 1;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
