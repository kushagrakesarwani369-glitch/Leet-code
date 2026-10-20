class Solution {
public:

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int d = 0 ; 
        int k = 0 ; 
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] ==1)
                k++;
            else if(nums[i] == 0 )
                k = 0  ;
            if(d<k)
                d = k;
            
        }
        return d;
        
    }
};