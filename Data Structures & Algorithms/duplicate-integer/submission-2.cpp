class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       while(nums.size()>0){
        for(int i = 0; i<nums.size() -1; i++){
                bool reality = 0;
                if(nums[i]==nums[i+1]){
                    return 1 ;
                }
            }
            return 0 ; 
        }
        return 0;
    }
};