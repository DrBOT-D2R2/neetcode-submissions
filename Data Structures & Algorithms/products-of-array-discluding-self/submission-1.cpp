class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zeroCount = 0;

        for (int x : nums) {
            if (x == 0)
                zeroCount++;
            else
                prod *= x;
        }

        vector<int> ans(nums.size(), 0);

        if (zeroCount > 1)
            return ans;

        if (zeroCount == 1) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0)
                    ans[i] = prod;
            }
            return ans;
        }

        for (int i = 0; i < nums.size(); i++)
            ans[i] = prod / nums[i];

        return ans;
    }
};