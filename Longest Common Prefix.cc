class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int s = strs.size();
        if (s==0) { return "";}
        if (s==1) { return strs[0];}
        sort(strs.begin(), strs.end());
        string prefix = strs[0];
        
        size_t x;
        
        for (int i = 1; i < s; i++ )
        {
            string check_string = strs[i];
            while (check_string.find(prefix)==string::npos || check_string.find(prefix)!= 0 ){
                prefix.pop_back();
                if (prefix.size()==0) { return "";}
            }
        }
        
        return prefix;
    }
};