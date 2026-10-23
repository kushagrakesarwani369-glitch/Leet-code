class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        vector<int>p;
        p.push_back(1);
        for(int i = 0 ;i<numRows;i++){
            vector<int>q;
            for(int j = 0 ; j < i + 1 ; j++){
                if(j==0 || j==i){
                    q.push_back(1);
                }
                else
                    q.push_back(p[j-1] + p[j]);
            }
            v.push_back(q);
            p = q;
        }
        return v;
        
    }
};