class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ff=1 ; 
        pair <int,int> f(0,0);
        sort(nums.begin() , nums.end());
        if(nums.size() == 1)
            return nums[0];
        for(int i = 0 ; i < nums.size() -1; i ++){
            if(nums[i] == nums[i+1]){
                ff++;
                if(f.second<ff){
                    f.second = ff;
                    f.first = nums[i];
                }
            }
            else
                ff = 1;
        }
        return f.first;
        
    }
};