class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int r= matrix[0].size();;
        int k = matrix.size();
        int total = matrix.size() * matrix[0].size();
        while(k>0 && r> 0 ){
            int m = matrix.size();
            int n = matrix[0].size();
            for(int i = 0 ; i <n ;i++){
                v.push_back(matrix[0][i]);
            }
            if(v.size() == total)
                return v;
            for(int j = 1; j <m - 1 ;j++ ){
                v.push_back(matrix[j][n-1]);
                matrix[j].erase(matrix[j].begin() + n-1 );
            }
            if(v.size() == total)
                return v;
            for(int i = n-1 ; i >=0 ;i--){
                v.push_back(matrix[m-1][i]);
            } 
            if(v.size() == total)
                return v;
            for(int j = m-2; j>=1;j-- ){
                v.push_back(matrix[j][0]);
                matrix[j].erase(matrix[j].begin() + 0 );
            }
            matrix.erase(matrix.begin() + m-1);
            matrix.erase(matrix.begin()); 
            n--;  
            k -= 2;
            r -= 2;             
        }
        return v;    
    }
};