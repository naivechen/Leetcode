// https://oj.leetcode.com/problems/majority-element/


class Solution {
private:
    map<int,int> ma;
    map<int,int>::iterator it;
public:
    int majorityElement(vector<int> &num) {
        for(int i=0;i<num.size();i++)
            ma[num[i]]++;
        it=ma.begin();
        int cnt=-1,ans=0;
        while(it!=ma.end())
        {
            if(it->second>cnt) ans=it->first,cnt=it->second;
            ++it;
        }
        return ans;
    }
};
