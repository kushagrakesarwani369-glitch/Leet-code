class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<pair<int,int>>v(nums.size()/2,{0,0});
        int j = 0 , k = 0;
        for(int i = 0 ; i < nums.size();i++){
            if(nums[i] > 0){
                v[j].first = nums[i];
                j++;
            }
            else{
                v[k].second = nums[i];
                k++;
            }
        }
        for(int i = 0 ; i < nums.size()/2;i++){
            nums[2*i] = v[i].first;
            nums[2*i + 1] = v[i].second;
        }
        return nums;
        
    }
};