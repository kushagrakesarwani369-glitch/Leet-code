class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        ios::sync_with_stdio(false);
    cin.tie(nullptr);
        sort(nums.begin(),nums.end());
        vector <int> v;
        int count = 1,n = nums.size();
        if(n/3 == 0){
            if(nums.size()==2 && nums[0] != nums[1]) return nums;
            v.push_back(nums[0]);
            return v;
        }
        for(int i = 0 ; i < nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                count++;
                if(count == (n/3)+1){
                    v.push_back(nums[i]);
                }
            }
            else count  = 1;
        }
        return v;
        
    }
};