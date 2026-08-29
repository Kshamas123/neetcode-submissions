class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      for(int i=0;i<matrix.size();i++)
      {
           int low=0,high=matrix[i].size()-1;
           if(matrix[i][low]<=target && matrix[i][high]>=target)
           {
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(matrix[i][mid]==target)
                return true;
                if(matrix[i][mid]>target)
                high=mid-1;
                else
                low=mid+1;
            }
           }
      }   
      return false;
    }
};
