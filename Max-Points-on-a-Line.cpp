// https://oj.leetcode.com/problems/max-points-on-a-line/


/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
class Solution {
public:
    int maxPoints(vector<Point> &points) {
        int len=points.size();
        if(len==0) return 0;
        map<double,int> count;
        map<double,int>::iterator it;
        int ans=0;
        for(int i=0;i<len;i++)
        {
            int same=0;
            count.clear();
            count[(double)INT_MIN] = 0;
            for(int j=0;j<len;j++)
                if(i!=j)
                {
                    if(points[i].x==points[j].x && points[i].y==points[j].y) same++;
                    else if(points[i].x==points[j].x) count[(double)INT_MAX]++;
                    else 
                    {
                        double k=(double)(points[i].y-points[j].y)/(double)(points[i].x-points[j].x);
                        count[k]++;
                    }
                }
            it=count.begin();
            while(it!=count.end())
            {
                if(it->second+same>ans)
                    ans=it->second+same;
                ++it;
            }
        }
        return ans+1;
    }
};

