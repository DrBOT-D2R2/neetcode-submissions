class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr_len = 0;
        int max_len = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]== 1) curr_len++ ;
            else if(nums[i]== 0){
                max_len = max(curr_len,max_len);
                curr_len = 0;
            }
        }
        return max(max_len,curr_len) ;
    }
};