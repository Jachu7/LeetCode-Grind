#include <vector>
using namespace std;

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        rozwiaz(board);
    }

private:
    // pierwsze wolne 
    pair<int, int> pierwsze_wolne_pole(vector<vector<char>>& plansza) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (plansza[i][j] == '.') {
                    return {i, j};
                }
            }
        }
        return {-1, -1}; // brak wolnego pola
    }

    bool poprawna(vector<vector<char>>& plansza, char liczba, pair<int, int> pozycja) {
        int wiersz = pozycja.first;
        int kol = pozycja.second;

        // sprawdzanie wiersza
        for (int i = 0; i < 9; i++) {
            if (plansza[wiersz][i] == liczba) return false;
        }

        // sprawdzanie kolumny
        for (int i = 0; i < 9; i++) {
            if (plansza[i][kol] == liczba) return false;
        }

        // sprawdzanie kwadratu
        int start_wiersz = (wiersz / 3) * 3;
        int start_kol = (kol / 3) * 3;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (plansza[start_wiersz + i][start_kol + j] == liczba) {
                    return false;
                }
            }
        }
        return true;
    }

    // rekurencyjne rozwiązywanie
    bool rozwiaz(vector<vector<char>>& plansza) {
        pair<int, int> pole = pierwsze_wolne_pole(plansza);

        if (pole.first == -1) { // brak wolnych pól -> sudoku rozwiązane
            return true;
        }

        int wiersz = pole.first;
        int kol = pole.second;

        for (char liczba = '1'; liczba <= '9'; liczba++) {
            if (poprawna(plansza, liczba, {wiersz, kol})) {
                plansza[wiersz][kol] = liczba;

                if (rozwiaz(plansza)) {
                    return true;
                }

                // cofnięcie ruchu
                plansza[wiersz][kol] = '.';
            }
        }
        return false;
    }
};
