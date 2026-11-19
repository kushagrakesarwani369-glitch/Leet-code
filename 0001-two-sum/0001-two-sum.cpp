class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        vector<int>k=nums;
        sort(nums.begin(),nums.end());
        int *a = &nums[0],*b=&nums[nums.size()-1],p,q,f=0;
        while(*a+*b != target){
            if(*a+*b>target) b--;
            else a++;
        }      
        for(int i = 0 ;i<k.size();i++){
            if((k[i]==*a||k[i]==*b) && !f){
                p = i;
                f=1;
            }
            else if((k[i]==*a||k[i]==*b) && f){
                q = i;
                break;
            }
        }  
        v.push_back(p);
        v.push_back(q);
        return v;
    }
    
};