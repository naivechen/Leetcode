// https://oj.leetcode.com/problems/n-queens-ii/


class Solution {
public:
    vector<string> str;
    vector<bool> rowConflict;
    vector<bool> slashConflict;
    vector<bool> backSlashConflict;
    int count;
    int totalNQueens(int n) {
    
    for(int i=0;i<n;i++)
    {
        string tmp;
        for(int i=0;i<n;i++)
        {
        	tmp.push_back('.');
        }
    	str.push_back(tmp);
    }
    
    for(int i=0;i<n;i++)
    {
    	rowConflict.push_back(false);
    }
    
    for(int i=0;i<2*n;i++)
    {
    	slashConflict.push_back(false);
    }
    
    for(int i=0;i<2*n;i++)
    {
    	backSlashConflict.push_back(false);
    }
    
    count = 0;

    addAQueen(0,0,n);
    return count;

}

bool addAQueen(int i, int j, int n)
{
    if(i == n)
    {
        count++;
        return true;
    }
    if(j==n)
    {
        return false;
    }
    if(!rowConflict[j])
    {
		if(!slashConflict[i-j+n])
		{
		    if(!backSlashConflict[i+j])
		    {
    			str[i][j] = 'Q';
    			rowConflict[j] = true;
    			slashConflict[i-j+n] = true;
    			backSlashConflict[i+j] = true;
    			bool result = addAQueen(i+1,0,n);
    			str[i][j] = '.';
                rowConflict[j] = false;
                slashConflict[i-j+n] = false;
                backSlashConflict[i+j] = false;
		    }
		}
	}
	return addAQueen(i,j+1,n);
}
};
