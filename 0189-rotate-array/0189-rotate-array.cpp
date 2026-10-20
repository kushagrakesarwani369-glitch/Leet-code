class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int *p = &nums[0];
        k = k % nums.size();
        k = nums.size()-k;
        reverse(p,p+k);
        reverse(p+k,p + nums.size());
        reverse(p,p+nums.size());
        //return nums;
    }
};