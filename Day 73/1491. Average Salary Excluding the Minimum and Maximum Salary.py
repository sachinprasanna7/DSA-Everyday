class Solution:
    def average(self, salary: List[int]) -> float:

        minIndex = maxIndex  = 0
        count = salary[0]

        for i in range(1, len(salary)):
            if(salary[i] > salary[maxIndex]):
                maxIndex = i
            if(salary[i] < salary[minIndex]):
                minIndex = i
            count += salary[i]


        return (count - salary[maxIndex] - salary[minIndex])/(len(salary) - 2)