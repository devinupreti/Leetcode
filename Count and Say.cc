class Solution {
public:
    string generate(string s)
    {
        int count = 1;
        string answer;
        if (s.size() == 0) { return ""; }
        else if (s.size() == 1) { answer.push_back('1'); answer.push_back(s[0]); return answer; }
        
        for (int i = 1; i< s.size(); i++) 
        {   
            if (s[i] == s[i-1]) { count++; }
            else { 
                   answer = answer + to_string(count); 
                   answer.push_back(s[i-1]); 
                   count = 1;}
            
            if (i == s.size()-1) 
            {
                answer = answer + to_string(count); 
                answer.push_back(s[i]);
            }
            
        }
        
       
        return answer;  
    }
    
    vector <string> arr;
    
    string countAndSay(int n) {
        
        arr.insert(arr.begin()+0, "1");
        arr.insert(arr.begin()+1, "11");
        arr.insert(arr.begin()+2, "21");
        arr.insert(arr.begin()+3, "1211");
        arr.insert(arr.begin()+4, "111221");
        
        string x;
        if (n > arr.size())
        {   
            for (int i = arr.size(); i < n;i++  )
            {   x = generate(arr[i-1]);
                arr.insert(arr.begin()+i, x);
            }
            return arr[n-1];
        }
        else { return arr[n-1]; }
    }
    
    
};