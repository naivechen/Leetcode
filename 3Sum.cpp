// https://oj.leetcode.com/problems/3sum/


class Solution {
private:
    vector<vector<int> > ans;
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        sort(num.begin(),num.end());
        int len=num.size();
        for(int i=0;i<len;i++)
        {
            if(i>0 && num[i]==num[i-1]) continue;
            int j=i+1,k=num.size()-1;
            while(j<k)
            {
                if(j>i+1 && num[j]==num[j-1])
                {
                    j++;
                    continue;
                }
                if(k<num.size()-1 && num[k]==num[k+1])
                {
                    k--;
                    continue;
                }
                int sum=num[i]+num[j]+num[k];
                if(sum>0) k--;
                else if(sum<0) j++;
                else 
                {
                    vector<int> tmp;
                    tmp.push_back(num[i]);
                    tmp.push_back(num[j]);
                    tmp.push_back(num[k]);
                    ans.push_back(tmp);
                    j++;
                }
            }
        }
        return ans;
    }
};
