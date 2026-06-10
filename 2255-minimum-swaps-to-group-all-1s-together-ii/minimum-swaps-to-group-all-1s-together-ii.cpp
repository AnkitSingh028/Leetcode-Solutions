class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int ones = 0;

        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                ones++;
        }

       
        if (ones == 0 || ones == n)
            return 0;

        
        int zeroCount = 0;
        for (int i = 0; i < ones; i++) {
            if (nums[i] == 0)
                zeroCount++;
        }

        int ans = zeroCount;

        
        for (int i = ones; i < n + ones; i++) {
           
            if (nums[i % n] == 0)
                zeroCount++;
            
            
            if (nums[(i - ones) % n] == 0)
                zeroCount--;

            ans = min(ans, zeroCount);
        }

        return ans;
    }
};