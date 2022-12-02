class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 , r = 0;
        int res = 0;
        set<char> x;
        while(r < s.size()){
            if(x.find(s[r]) == x.end()){  //Not find
                res = max(res , r - l + 1);
                x.insert(s[r]);
                r++;
                
            }
                
            else {  //find
                x.erase(s[l]);
                l++;
            }
            
        } return res;
    }
};