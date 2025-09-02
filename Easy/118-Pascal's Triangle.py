class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        output = []

        for i in range(numRows):
            output.append([""]*(i+1))

        if numRows >= 1:
            output[0][0] = 1
        if numRows >= 2:
            output[1][0], output[1][1] = 1, 1

        for i in range(numRows-2):
            output[i+2][0], output[i+2][-1] = 1, 1
            for j in range(1, len(output[i+2]) - 1):
                output[i+2][j] = output[i+1][j-1] + output[i+1][j]

        return output
