class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        output = 0
        state = True

        for i in range(len(grid)):
            for j in range(len(grid)):
                state = True
                for k in range(len(grid)):
                    if grid[i][k] != grid[k][j]:
                        state = False
                        break

                if state:
                    output += 1

        return output
