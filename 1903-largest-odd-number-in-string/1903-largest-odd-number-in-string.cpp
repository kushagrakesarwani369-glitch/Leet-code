class Solution {
public:
    string largestOddNumber(string num) {
        int n =num.length()-1;
        for(; n>=0 ; n--){
            if(num[n] % 2 != 0){
                break;
            }
        }
        string result;
        for(int i = 0;i<=n ; i++){
            result += num[i];
        }
        return result ;

    }
};