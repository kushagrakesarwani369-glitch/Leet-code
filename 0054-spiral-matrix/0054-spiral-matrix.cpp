class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        vector<int>v;
        int r = 0;
        while(matrix.size() != 0){
            int n= matrix[0].size();
            if(n == 0) break;
            int m = matrix.size();
            //if(matrix.size()==0) break;
            for(int i = 0 ; i < matrix.size();i++){
                if(i==0){
                    v.insert(v.begin()+r,matrix[i].begin(),matrix[i].end());
                    r+= n;
                    //matrix.erase(matrix.begin()+i);
                    //i--;
                }
                else if(i==m-1){ 
                    v.insert(v.begin()+r,matrix[i].rbegin(),matrix[i].rend());
                    r += n;
                    //matrix.erase(matrix.begin()+i);
                    //i--;
                }
                else{
                    v.insert(v.begin()+r,matrix[i].begin()+n-1,matrix[i].end());
                    r++;
                    matrix[i].erase(matrix[i].begin()+n-1);
                    //i--;
                }
            }
            if(m > 1) matrix.erase(matrix.begin()+m-1);  // ADDED: erase bottom row first
            matrix.erase(matrix.begin());                // ADDED: then top row
            for(int i  = matrix.size()-1 ; i >= 0 ; i--){
                if(n>1){
                v.insert(v.begin()+r,matrix[i].begin(),matrix[i].begin()+1);
                r++;
                matrix[i].erase(matrix[i].begin());
                }
                else if(n==1) return v;
            }
        }
        return v;
    }
};