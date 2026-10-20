class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0 ;
        int k = 0 ;  
        for(int i = 0 ; i < nums.size();i++){
            sum += nums[i];
            k += i+1;
        }
        return (k-sum);
        
    }
};