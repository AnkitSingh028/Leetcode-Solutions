class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,j;
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int maxp = (nums[i]-1)*(nums[j]-1);
                arr.push_back(maxp);
            }
        }
        int maxx =  *max_element(arr.begin(),arr.end());
        return maxx;
    }
};