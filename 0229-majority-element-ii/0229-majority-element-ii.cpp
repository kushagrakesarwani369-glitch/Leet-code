class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m;
        vector <int> v;
        int n = nums.size();
        for(int i =  0 ; i < nums.size() ;i++){
            if(++m[nums[i]] == (n/3) + 1) v.push_back(nums[i]);
        }
        return v;
        
    }
};