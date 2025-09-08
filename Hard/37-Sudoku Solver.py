class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        # sudoku solver

        def pierwsze_wolne_pole(plansza):
            for i in range(9):
                for j in range(9):
                    if plansza[i][j] == ".":
                        return (i, j)
            return None

        def poprawna(plansza, liczba, pozycja):
            # sprawdzanie wiersza
            for i in range(9):
                if plansza[pozycja[0]][i] == liczba:
                    return False

            # sprawdzanie kolumny
            for i in range(9):
                if plansza[i][pozycja[1]] == liczba:
                    return False

            # sprawdzenie kwadratu
            start_wiersz = (pozycja[0] // 3) * 3
            start_kol = (pozycja[1] // 3) * 3
            for i in range(3):
                for j in range(3):
                    if plansza[start_wiersz + i][start_kol + j] == liczba:
                        return False
            return True

        def rozwiaz(plansza):
            pole = pierwsze_wolne_pole(plansza)
            if not pole:
                return True

            wiersz, kol = pole
            for i in range(1, 10):
                liczba = str(i)
                if poprawna(plansza, liczba, (wiersz, kol)):
                    plansza[wiersz][kol] = liczba

                    if rozwiaz(plansza):
                        return True

                    # ruch wstecz
                    plansza[wiersz][kol] = "."

            return False

        rozwiaz(board)
