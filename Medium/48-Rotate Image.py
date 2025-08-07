class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        pomocnicza = []
        for i in range (len(matrix)):
            pomocnicza.append([0] * len(matrix))

        for i in range(len(matrix)):
            for j in range(len(matrix)):
                pomocnicza[j][len(matrix) - 1 - i] = matrix[i][j]
        
        for i in range(len(matrix)):
            for j in range(len(matrix)):
                matrix[i][j] = pomocnicza[i][j]
