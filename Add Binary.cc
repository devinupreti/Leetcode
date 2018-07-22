class Solution {
public:
    string addBinary(string a, string b) {
        // making the strings of equal length
        int diff; // difference            
        if (b.size() > a.size()) 
        { swap(a, b); }
        
        diff = a.size() - b.size(); 
        for(int i = 0; i < diff; i++)
            { b = "0" + b; }
        
        int length = a.size();
        string answer;
        int carry = 0;
        int calc; // calculated value
        for(int i = length - 1; i > -1; i--)
        {
            int ia = a[i] - '0';
            int ib = b[i] - '0';
            calc = ia + ib + carry;
            if(calc == 0) { answer = "0" + answer; carry = 0; }
            else if(calc == 1) { answer = "1" + answer; carry = 0; }
            else if(calc == 2) { answer = "0" + answer; carry = 1; }
            else { answer = "1" + answer; carry = 1; }
        }
        if(carry == 1) { answer = "1" + answer; }
        return answer;
    }
};