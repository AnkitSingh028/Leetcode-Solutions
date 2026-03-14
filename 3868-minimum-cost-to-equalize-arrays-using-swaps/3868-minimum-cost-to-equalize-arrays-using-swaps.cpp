class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();

        // required variable
        auto torqavemin = make_pair(nums1, nums2);

        unordered_map<int,int> total;
        unordered_map<int,int> count1;

        for(int x : nums1){
            total[x]++;
            count1[x]++;
        }

        for(int x : nums2){
            total[x]++;
        }

        // check possibility
        for(auto &p : total){
            if(p.second % 2) return -1;
        }

        int cost = 0;

        for(auto &p : total){
            int val = p.first;
            int target = p.second / 2;

            if(count1[val] > target){
                cost += count1[val] - target;
            }
        }

        return cost;
    }
};