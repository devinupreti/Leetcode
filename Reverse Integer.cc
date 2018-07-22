class Solution {
public:
    int reverse(int x) {
        bool flag = false; // For negative
        if (x<0) { x = x - 2*x;  flag = true; }
        int z = 0;
        int prev = 0;
        while(x!=0)
        {
        z = z*10 + x%10;
        x = x/10;
        if (z/10 != prev) { return 0; }
        prev = z;
        }
        if (flag == true) {z = z - 2*z;}
        
        return  z;
        

    }
};