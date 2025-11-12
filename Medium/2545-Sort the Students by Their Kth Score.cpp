class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for (int i = 0; i < score.size(); ++i) {
            int maxIndex = i; 
            for (int j = i + 1; j < score.size(); ++j) {
                if (score[j][k] > score[maxIndex][k]) {
                    maxIndex = j;
                }
            }
            std::swap(score[i], score[maxIndex]);
        }
        return score;
    }
};
