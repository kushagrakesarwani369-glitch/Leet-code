class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> c;
        vector<char> v;
        for(int i = 0;i<s.size();i++){
            if(!isalnum(s[i]))
                continue;
            c.push_back(tolower(s[i]));
        }
        v = c;
        reverse(c.begin(),c.end());
        if(c==v)
            return true;
        return false;

    }
};