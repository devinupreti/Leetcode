class Solution {
public:
    int lengthOfLastWord(string s) {
        int answer = 0;
            int length = s.size() - 1;
            while(s[length] == ' ') {length = length - 1;}
            for(int i = length; i > -1; i--)
            {
                if(s[i] == ' ') { break; }
                else { answer += 1; }
            }
         return answer;
    }
};