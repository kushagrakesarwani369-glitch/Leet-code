class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int p = 0, q = 1;
        for (int x : nums) {
            if (x > 0) { ans[p] = x; p += 2; }
            else       { ans[q] = x; q += 2; }
        }
        return ans;
    }
};