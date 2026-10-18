class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result  = "";
        string empty = "";
        int p = strs.size();
        if(p==1)
            return strs[0];
        else if (p==0)
            return empty;
        string s = strs[0];
        string r = strs[1];
        int k = r.size();
        for(int y = 0;y<strs[0].size() && y<strs[1].size();y++){
            if(s[y] != r[y]){
                k = y;
                break;
            }
            else
                result += s[y];
        }
        if(p==2)
            return result;
        int d = result.size();

        for(int n = 2 ;n<strs.size();n++){
            string q = strs[n];
            int l = 0;
            for(int i = 0;i < k && i<q.size();i++){
                if(result[i] == q[i]){
                    l++;
                }
                else
                    break;
                    
            }
            if(d>l)
                d = l;
        }
        string tt= "";
        for(int p = 0;p<d;p++)
            tt += result[p];
        return tt;
    }
};