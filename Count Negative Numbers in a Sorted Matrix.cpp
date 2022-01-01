class Solution {
public:
 int countNegatives(vector<vector<int>>& grid) {
      int ans=0;
      int n=grid.size();
      int m=grid[0].size();
      int i=0,j=m-1;
      while(j>=0&&i<n){
          if(grid[i][j]<0){
            ans+=n-i;  
          }
          if(grid[i][j]<0)
              j--;
          else 
              i++;
      }
        return ans;
    }
};
