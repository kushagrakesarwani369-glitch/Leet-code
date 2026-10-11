class Solution {
public:
    bool check(vector<int>& nums) {
        int dec = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%(nums.size())])
                dec++;
            //if(nums[i]<=nums[i+1])
                //continue;
            //else
                //dec++;
        }
        //if(nums[nums.size()-1] > nums[0])
            //dec++;
        if(dec <=1)
            return true;
        return false;
        
    }
};