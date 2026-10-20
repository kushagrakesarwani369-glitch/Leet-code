class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = nums.size() ; 
        for(int i = 0 ; i < nums.size();i++){
            for(int j = 0  ; j < nums.size();j++){
                if(nums[j] == nums[i] && j != i){
                    nums.erase(nums.begin() + j);
                    j = i +1;
                    k--;
                }
            }

        }return k;
    }
};