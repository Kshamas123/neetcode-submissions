class Solution {
public:
    int findMin(vector<int> &arr) {
        int low=0,high=arr.size()-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(arr[high]<arr[mid])
                low=mid+1;
            else
            high=mid;
        }
        return arr[low];
    }
};
