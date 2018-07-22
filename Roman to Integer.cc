class Solution {
public:
    int romanToInt(string s) {
        // Define I as 1, V as 5, X as 10, L as 50, C as 100, D as 500 and M as 1000
        
        int x = 0;
        for (int i = s.size() - 1 ; i >= 0; i--)
        {
            if(rval(s[i]) <= rval(s[i-1])) { x = x + rval(s[i]); }
            else { x = x + rval(s[i]) - rval(s[i-1]);
                   i--; }
        }
        return x;
    }
    
    int rval(char c) {
        if (c == 'I') { return 1; }
        else if (c == 'V') { return 5 ;}
        else if (c == 'X') { return 10 ;}
        else if (c == 'L') { return 50 ;}
        else if (c == 'C') { return 100 ;}
        else if (c == 'D') { return 500 ;}
        else if (c == 'M') { return 1000;}
        
        return 0; 
    }
};