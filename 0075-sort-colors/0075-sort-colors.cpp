
class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>m;
        for(int i = 0 ; i < nums.size() ; i++ ){
            m[nums[i]]++;
        }
        int a = m[0],b=m[1],c=m[2];
        for(int i = 0 ; i < nums.size() ; i++){
            if(a!= 0){
                nums[i] = 0;
                a--;
            }
            else if(b!= 0){
                nums[i] = 1;
                b--;
            }
            else
                nums[i] = 2;

        }
    }
};
