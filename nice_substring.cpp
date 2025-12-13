#include <iostream>
#include <string>
using namespace std;

bool isNice(string s) {
    for (char c : s) {
        char lower = tolower(c);
        char upper = toupper(c);

        bool hasLower = false, hasUpper = false;

        for (char d : s) {
            if (d == lower) hasLower = true;
            if (d == upper) hasUpper = true;
        }

        if (!hasLower || !hasUpper) 
            return false;
    }
    return true;
}

string longestNiceSubstring(string s) {
    int n = s.size();
    string best = "";

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            string sub = s.substr(i, j - i + 1);
            if (isNice(sub) && sub.size() > best.size())
                best = sub;
        }
    }
    return best;
}

int main() {
    string s = "YazaAay";
    cout << longestNiceSubstring(s);

  }


