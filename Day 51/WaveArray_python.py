from typing import List


class Solution:
    def convertToWave(self, n : int, a : List[int]) -> None:
        
        ctr = True
        
        size = len(a) - 1
        
        for i in range(size):
            
            if(a[i] < a[i+1] and ctr == True):
                a[i], a[i+1] = a[i+1], a[i]
            
            elif(a[i] > a[i+1] and ctr == False):
                a[i], a[i+1] = a[i+1], a[i]
            
            ctr = ~ctr