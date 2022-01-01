class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int len = operations.size();
        int count = 0;
        for(int i = 0;i<len;i++){
            if(operations[i] == "++X" || operations[i]=="X++"){
                count++;
            }else{
                count--;
            }
        }
        return count;
    }
};
