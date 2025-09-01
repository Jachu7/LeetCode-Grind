class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        def check_rows(board): # True = Valid
            numbers = []
            for i in range(len(board)):
                for j in range(len(board[i])):
                    if board[i][j] != "." and board[i][j] not in numbers:
                        numbers.append(board[i][j])
                    elif board[i][j] in numbers:
                        return False
                numbers = []
            return True

        def check_columns(board): # True = Valid
            numbers = []
            for i in range(len(board)):
                for j in range(len(board[i])):
                    if board[j][i] != "." and board[j][i] not in numbers:
                        numbers.append(board[j][i])
                    elif board[j][i] in numbers:
                        return False
                numbers = []
            return True

        boxes_cords = [[0,0], [0,3], [0,6],
                    [3,0], [3,3], [3,6],
                    [6,0], [6,3], [6,6]]
        def check_box(a,b):
            numbers = []
            for i in range(3):
                for j in range(3):
                    if board[i+a][j+b] != "." and board[i+a][j+b] not in numbers:
                        numbers.append(board[i+a][j+b])
                    elif board[i+a][j+b] in numbers:
                        return False
            return True

        def check_all_squares(board):
            for i in range(len(boxes_cords)):
                if check_box(boxes_cords[i][0], boxes_cords[i][1]) == False:
                    return False
            return True

        if check_rows(board) and check_columns(board) and check_all_squares(board):
            return True
        else:
            return False
