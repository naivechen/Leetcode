// https://oj.leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> ans;
        int len=numbers.size();
        map<int,int> ma;
        ma.clear();
        for(int i=0;i<len;i++)
            ma[numbers[i]]=i+1;
        int index1,index2;
        for(int i=0;i<len;i++)
        {
            int aim=target-numbers[i];
            if(ma[aim]!=0 && ma[aim]-1!=i)
            {
                index1=i+1;
                index2=ma[aim];
                break;
            }
        }
        ans.push_back(index1);
        ans.push_back(index2);
        return ans;
    }
};
