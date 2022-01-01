class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len = nums.size();
        if(len < 2){
            return nums;
        }
        vector<int>sum(len);
        sum[0] = nums[0];
        for(int i = 1;i<len;i++){
            sum[i] = nums[i] + sum[i-1];
        }
        return sum;
    }
};
