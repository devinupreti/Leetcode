class Solution {
public:
    string convert(string s, int numRows) {
        if (s.size() == 0 || numRows == 0 ) { return ""; }
        else if (numRows == 1 || s.size() == 1) { return s;} 
        
        string storage[numRows];
        int row = 0;
        int step;
        
        for(int i = 0; i < s.size(); i++)
        {   
            storage[row].push_back(s[i]);
            if (row == 0) {step = 1;}
            else if (row == numRows - 1) {step = -1;}
            row += step;
        }
        string ans = "";
        for (int k = 0; k < numRows ; k++)
        {
            ans += storage[k];
        }
        return ans;
    }
};