class Solution(object):
    def lengthOfLongestSubstring(self, s):
        n = len(s)
        i=0
        j=0
        current = ""
        answer = 0
        while (i<n and j<n):
            if( s[j] not in current):
                current += s[j]
                j += 1
                answer = max(answer, j-i)
            else:
                i += 1
                current = current[1:]
                
        
        return answer