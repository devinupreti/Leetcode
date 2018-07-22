class Solution {
public:
    void recursive_function(int left_count, int right_count, int space_left, string generated, vector<string> &ans )
    {
        if (left_count > right_count) { return ; }
        
        if(left_count > 0 && right_count > 0)
        {
            recursive_function(left_count - 1, right_count, space_left - 1, generated + "(", ans);
            recursive_function(left_count, right_count - 1, space_left - 1, generated + ")", ans);
            return;
        }
        
        else if (right_count > 0)
        {
            recursive_function(left_count, right_count - 1, space_left - 1, generated + ")", ans);
        }
        
        else
        {
            if(space_left == 0)
            { ans.push_back(generated); return; }
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        string s = ""; // intial string to be generated
        recursive_function(n, n, 2*n, s, ans); 
        return ans;
    }
};