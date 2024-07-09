# https://leetcode.com/problems/house-robber/description/
# House Robber

class Solution:
    def solve(self, nums, i, dp):
        if i == 0:
            return nums[0]
        
        if dp[i] != -1:
            return dp[i]
        
        not_steal = self.solve(nums, i - 1, dp)
        steal = nums[i] 
        if i > 1:
            steal = self.solve(nums, i - 2, dp) + nums[i]
        
        dp[i] = max(not_steal, steal)
        return dp[i]
    
    def solve_tab(self, nums, n):
        dp = [0] * n
        dp[0] = nums[0]

        for i in range(1, n):
            not_steal = dp[i - 1]
            steal = nums[i] 
            if i > 1:
                steal = dp[i - 2] + nums[i]
            dp[i] = max(not_steal, steal)

        return dp[n - 1]
    
    def solve_ot(self, nums, n):
        prev2 = prev1 = nums[0]

        for i in range(1, n):
            not_steal = prev1
            steal = nums[i] 
            if i > 1:
                steal = prev2 + nums[i]
            prev1, prev2 = max(not_steal, steal), prev1

        return prev1


    def rob(self, nums):
        n = len(nums)
        dp = [-1] * n
        return self.solve_ot(nums, n)
    

s = Solution()
nums = [1,3,1]
print(s.rob(nums))