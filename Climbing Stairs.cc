class Solution {
public:
    int climbStairs(int n) {
         vector<int> ref;
    ref.push_back(1);
    ref.push_back(2);
    ref.push_back(3);
    for(int i = 3; i < n; i++)
    {
        int calc_value = ref[i-1] + ref[i-2];
        ref.push_back(calc_value);
    }
    int answer = ref[n-1];
    return answer;
    
    }
  
};