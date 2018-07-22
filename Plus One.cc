class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        vector <int> answer; 
        for (int i = length-1; i >= 0; i--)
        {
            if(i==0 && digits[i]==9)
            {digits[i] = 0; 
             digits.push_back(1); 
             reverse(digits.begin(), digits.end()); 
         	 break; 
         	}
         	digits[i] = digits[i] + 1;
            if(digits[i] == 10) { digits[i] = 0; continue;}
            else{break;}
        }
        
        return digits;
    }
};