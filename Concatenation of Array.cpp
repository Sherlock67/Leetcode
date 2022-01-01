class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        vector<int> result(length*2);
        for(int i = 0;i<nums.size();i++){
            result[i] = nums[i];
            result[i+length] = nums[i];
        }
        return result;
    }
};
