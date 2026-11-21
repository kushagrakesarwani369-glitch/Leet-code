class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        if (n < 3) return res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            if (nums[i] > 0) break;                        // smallest is positive, so no zero sum is possible
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate anchor

            int p = i + 1, q = n - 1;                      // pointers stay after i
            while (p < q) {
                int sum = nums[i] + nums[p] + nums[q];
                if (sum < 0) p++;
                else if (sum > 0) q--;
                else {
                    res.push_back({nums[i], nums[p], nums[q]});
                    p++; q--;
                    while (p < q && nums[p] == nums[p - 1]) p++; // skip duplicate low values
                    while (p < q && nums[q] == nums[q + 1]) q--; // skip duplicate high values
                }
            }
        }
        return res;
    }
};