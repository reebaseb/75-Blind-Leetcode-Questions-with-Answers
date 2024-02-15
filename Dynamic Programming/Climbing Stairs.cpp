//C++
//recursion dynamic programming

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
    }

    return climbStairs(n-1) + climbStairs(n-2); //recursively calls n-1 and n-2 steps
    }
};
