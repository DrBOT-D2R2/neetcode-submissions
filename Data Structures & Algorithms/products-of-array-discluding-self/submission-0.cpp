class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zerocount = 0;
        vector<int>zeroes(nums.size());
        for (int i = 0; i<nums.size(); i++){
            if(nums[i]!=0){
                prod *= nums[i];
                zeroes[i] = 1;
            }else if(nums[i]==0){
                zeroes[i] = 0;
                zerocount ++;
            }
        }

        vector<int> ans(nums.size());

        if(zerocount > 1){
            fill(ans.begin(),ans.end(),0);
            return ans;
        }
        
        if(zerocount == 1){
            for(int i = 0; i<nums.size(); i++){
                if(zeroes[i] == 0){
                    ans[i] = prod;
                }else ans[i] = 0;
            }
            return ans;
        }

        for(int i = 0; i<nums.size(); i ++){
            if(zeroes[i] == 0){
                ans[i] = prod;
                fill(ans.begin()+i,ans.end(),0);
            }else{
                ans[i] = prod/nums[i] ;
            }
        }

        return ans;
    }
};
