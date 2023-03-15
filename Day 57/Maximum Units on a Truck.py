class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:

        sorted_vec = sorted(boxTypes, key=lambda x: x[1], reverse=True)

        answer = 0

        for i in range(0, len(boxTypes)):

            possible = min(truckSize, sorted_vec[i][0])

            answer += possible*sorted_vec[i][1]

            truckSize -= possible

            if(truckSize == 0):
                break
        

        return answer