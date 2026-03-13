class Solution:
    def tribonacci(self, n: int) -> int:
        F = []
        for i in range(38):
            F.append(0)
        F[0] = 0
        F[1] = 1
        F[2] = 1

        for i in range(3, 38):
            F[i] = F[i-1] + F[i-2] + F[i-3]

        return F[n]
