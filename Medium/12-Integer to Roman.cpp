class Solution {
public:
    string dopojedynczej(int liczba) {
        if (liczba == 0) {
            return "";
        }
        if (liczba <= 3 && liczba >= 1) {
            return string(liczba, 'I');
        } else if (liczba == 4) {
            return "IV";
        } else if (liczba == 5) {
            return "V";
        } else if (liczba > 5 && liczba < 9) {
            return "V" + string(liczba - 5, 'I');
        } else if (liczba == 9) {
            return "IX";
        }
        return"";
    }

    string dodziesietnej(int liczba) {
        if (liczba == 0) {
            return "";
        }
        if (liczba <= 3 && liczba >= 1) {
            return string(liczba, 'X');
        } else if (liczba == 4) {
            return "XL";
        } else if (liczba == 5) {
            return "L";
        } else if (liczba > 5 && liczba < 9) {
            return "L" + string(liczba - 5, 'X');
        } else if (liczba == 9) {
            return "XC";
        }
        return "";
    }

    string dosetnej(int liczba) {
        if (liczba == 0) {
            return "";
        }
        if (liczba <= 3 && liczba >= 1) {
            return string(liczba, 'C');
        } else if (liczba == 4) {
            return "CD";
        } else if (liczba == 5) {
            return "D";
        } else if (liczba > 5 && liczba < 9) {
            return "D" + string(liczba - 5, 'C');
        } else if (liczba == 9) {
            return "CM";
        }
        return "";
    }

    string dotysiecy(int liczba) {
        if (liczba <= 3 && liczba >= 1) {
            return string(liczba, 'M');
        }
        return "";
    }

    string intToRoman(int num) {

        string wynik = "";

        int tysiace = num / 1000;
        wynik += dotysiecy(tysiace);
        num %= 1000;

        int setki = num / 100;
        wynik += dosetnej(setki);
        num %= 100;

        int dziesiatki = num / 10;
        wynik += dodziesietnej(dziesiatki);
        num %= 10;

        int jednostki = num;
        wynik += dopojedynczej(jednostki);

        return wynik;
    }
};
