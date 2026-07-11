class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seenNum;
        for(int i =0; i<nums.size(); i++){
            int currentNum = nums[i];
            int complement = target - currentNum ;
            if(seenNum.find(complement) != seenNum.end()){
                return{seenNum[complement], i };
            }
            seenNum[currentNum] = i;
        }
        return{-1,-1};
    }
};
