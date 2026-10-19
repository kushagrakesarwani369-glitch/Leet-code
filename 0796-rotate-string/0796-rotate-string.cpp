class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0 ; i < s.size();i++){
            char p = s[s.size() - 1];
            for(int j = s.size() - 1 ; j > 0;j--){
                s[j] = s[j-1];
            }
            s[0] = p;
            if(s == goal)
                return true;

        }
        return false;
    }
};