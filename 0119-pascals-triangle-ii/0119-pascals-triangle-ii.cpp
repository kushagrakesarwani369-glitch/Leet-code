class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>q;
        for(int i = 0 ; i <= rowIndex ; i++){
            vector<int> p;
            p.assign(i+1,1);
            for(int j = 1 ; j < i ; j++ ){
                p[j] = (q[j-1] + q[j]);
            }
            q = p;
        }
        return q;
        
    }
};