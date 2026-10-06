class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>freq;
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]]>1){
                ans = nums[i];

            }
        }
        return ans;
    }
};