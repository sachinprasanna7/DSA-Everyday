class Solution:
    def search(self, nums: List[int], target: int) -> int:

        start = 0
        end = len(nums) - 1
        mid = int((start + end) /2)

        while(start <= end):
            if(nums[mid] == target):
                return mid
            elif(nums[mid] < target):
                start = mid + 1
            else:
                end = mid - 1
            mid = int((start + end)/2)
        
        return -1


#ALTERNATIVE WITH FLOOR DIVISION OPERATOR

class Solution:
    def search(self, nums: List[int], target: int) -> int:

        start = 0
        end = len(nums) - 1

        while(start <= end):
            mid = int((start + end)//2)
            if(nums[mid] == target):
                return mid
            elif(nums[mid] < target):
                start = mid + 1
            else:
                end = mid - 1
        
        return -1