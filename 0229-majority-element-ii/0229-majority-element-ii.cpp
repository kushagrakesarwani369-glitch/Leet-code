class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1 = 0, e2 = 1, c1 = 0, c2 = 0;

        // Pass 1: find the two candidates
        for (int x : nums) {
            if (x == e1) c1++;
            else if (x == e2) c2++;
            else if (c1 == 0) { e1 = x; c1 = 1; }
            else if (c2 == 0) { e2 = x; c2 = 1; }
            else { c1--; c2--; }   // x cancels one vote from each candidate
        }

        // Pass 2: verify the candidates
        c1 = c2 = 0;
        for (int x : nums) {
            if (x == e1) c1++;
            else if (x == e2) c2++;
        }

        vector<int> res;
        int n = nums.size();
        if (c1 > n / 3) res.push_back(e1);
        if (c2 > n / 3) res.push_back(e2);
        return res;
    }
};