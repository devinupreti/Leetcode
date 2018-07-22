class Solution {
public:
    bool isValid(string s) {
        
        int var = 0;
        int x = s.length();
        if (x % 2 != 0) { return false; }
        string stack;
        char c;
        
        for (int i = 0; i < x; i++)
        {   char c = s[i];
            stack.push_back(c);
            if (stack.length() > 1) 
            {
                var = stack.length();
                if (stack[var-2] == '(' && stack[var-1] == ')' ) { stack.pop_back(); stack.pop_back(); }
                if (stack[var-2] == '{' && stack[var-1] == '}' ) { stack.pop_back(); stack.pop_back(); }
                if (stack[var-2] == '[' && stack[var-1] == ']' ) { stack.pop_back(); stack.pop_back(); }                         
            }
        }
        
        if (stack.length() == 0) { return true;} 
        return false;
    }
};