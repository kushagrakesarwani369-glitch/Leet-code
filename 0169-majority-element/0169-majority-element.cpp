class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int elem = 0;

        for (int c : nums) {
            if (count == 0) {
                elem = c;
                count = 1;
            }
            else if (elem == c) {
                count++;
            }
            else {
                count--;
            }
        }

        return elem;
    }
};