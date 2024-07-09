# https://leetcode.com/problems/climbing-stairs/description/
# Climbing Stairs

class Solution:
    def solve(self, n, i, dp):
        if i == 0 or i == 1:
            return 1
        if dp[i] != -1:
            return dp[i]
        
        dp[i] = self.solve(n, i - 1, dp) + self.solve(n, i - 2, dp)
        return dp[i]
    
    def solve_tab(self, n):
        dp = [-1] * (n + 1)
        dp[0] = dp[1] = 1
        for i in range(2, n + 1):
            dp[i] = dp[i - 1] + dp[i - 2]
        return dp[n]
    
    def solve_ot(self, n):
        cur = prev = 1
        for _ in range(2, n + 1):
            cur, prev = cur + prev, cur
        return cur

    def climbStairs(self, n):
        # dp = [-1] * (n + 1)
        return self.solve_ot(n)


s = Solution()
print(s.climbStairs(4))