#include<math.h>

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1)
        {
            return true;
        }
        for(int i = 0; i <= 30; i++)
        {
            long int ans = pow(4, i);

            if(ans == n)
            {
                return true;
            }
        }
        return false;
    }
};

