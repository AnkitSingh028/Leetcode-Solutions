class Solution {
public:
    int bs(vector<int>& arr, int s,int e,int k)
    {
        if(s>e) return -1;

        int mid = s+(e-s)/2;

        if(arr[mid]==k) return mid;

        if(arr[mid]<k) return bs(arr,mid+1,e,k);

        else return bs(arr,s,mid-1,k);

    }
    int search(vector<int>& nums, int target) {
        return bs(nums,0,nums.size()-1,target);
    }
};