class Solution {
public:
    string frequencySort(string s) {
        sort(s.begin(),s.end());
        vector<pair<int,char>>v;
        int j = 1 ; 
        int f = 1 ; 
        for(int i = 0 ; i < s.size()-1;i++){
            if(s[i] != s[i+1] || (i == s.size()-2)){
                if(s[i] == s[i+1] && (i == s.size()-2)){
                    pair<int,char>p;
                    p.second = s[i];
                    p.first = j+1;
                    v.push_back(p);
                    f = 0;
                }
                else{
                    pair<int,char>p;
                    p.second = s[i];
                    p.first = j;
                    v.push_back(p);
                    j = 1 ; 
                }
            }
            else
                j++;
            
        }
        if(f){
            pair<int,char>p;
            p.second = s[s.size()-1];
            p.first = 1;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        string result = "";
        
        for(int l = size(v)-1 ; l>=0;l--){
            for(int r = 0 ; r < v[l].first;r++){
                result += v[l].second;
            }

        }return result;
    }
};