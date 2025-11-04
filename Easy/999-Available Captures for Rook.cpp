class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int xRook, yRook;
    int iterator = 0;
    int counter = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] == 'R') {
                xRook = i;
                yRook = j;
                break;
            }
        }
    }
    //check top
    while (xRook - iterator >= 0) {
        if (board[xRook - iterator][yRook] == 'B') {
            break;
        }
        if (board[xRook - iterator][yRook] == 'p') {
            counter++;
            break;
        }
        iterator++;
    }
    iterator = 0;
    //check bottom
    while (xRook + iterator <= 7) {
        if (board[xRook + iterator][yRook] == 'B') {
            break;
        }
        if (board[xRook + iterator][yRook] == 'p') {
            counter++;
            break;
        }
        iterator++;
    }
    iterator = 0;
    //check left
    while (yRook - iterator >= 0) {
        if (board[xRook][yRook - iterator] == 'B') {
            break;
        }
        if (board[xRook][yRook - iterator] == 'p') {
            counter++;
            break;
        }
        iterator++;
    }
    iterator = 0;
    //check right
    while (yRook + iterator <= 7) {
        if (board[xRook][yRook + iterator] == 'B') {
            break;
        }
        if (board[xRook][yRook + iterator] == 'p') {
            counter++;
            break;
        }
        iterator++;
    }
    return counter;
    }
};
