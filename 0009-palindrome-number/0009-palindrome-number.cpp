#include <climits>
class Solution {
public:
    bool isPalindrome(int x) {
        int y =0;
        int t = x;
        if(x<0)
            return false;
        while (x!=0)
        {   
            if(y>INT_MAX /10)
                return false;
            y = y*10 + x%10;
            x = x/10;
        }if(t == y)
            return true;
        else
            return false;
    }
};