class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        for(int r=1;r<nums.size();r++){
            if(nums[left]!=nums[r]){
                left++;
                nums[left]=nums[r];
               
            }

        }
    
    return left+1;
        
    }
};