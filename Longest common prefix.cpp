class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        bool milyo = false;
        
        for (int i = 0; i < strs[0].size(); i++){
            for(int j = 1; j < strs.size(); j++){
                if(strs[0][i] != strs[j][i]){
                    return prefix;
                }
                
            }
                prefix = prefix + strs[0][i];
            }
         return prefix;
        }
         
        
};