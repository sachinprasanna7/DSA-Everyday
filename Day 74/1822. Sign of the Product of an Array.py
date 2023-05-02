class Solution:
    def arraySign(self, nums: List[int]) -> int:

        ans = 1

        for num in nums:
            ans *= num
            if(num == 0):
                return 0
        
        if ans > 0:
            return 1
        else:
            return -1