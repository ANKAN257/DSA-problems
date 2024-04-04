#include<bits/stdc++.h>
#include <iostream>
#include <string>

std::string convert(int n) {
    std::string s = "";
    const std::string z = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (n > 0) {
        if (n % 26 == 0) {
            n = n / 26 - 1;
            s += 'Z';
        } else {
            int k = n % 26;
            n = n / 26;
            s += z[k - 1];
        }
    }

    std::reverse(s.begin(), s.end());
    return s;
}

int sconvert(const std::string& s) {
    const std::string z = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = 0;

    for (char l : s) {
        int k = z.find(l) + 1;
        i = i * 26 + k;
    }

    return i;
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        std::string s;
        std::cin >> s;
        int n = s.length();
        std::string ans = "";
        bool digits = false;

        if (s.find('R') != std::string::npos && s.find('C') != std::string::npos) {
            size_t m = s.find('R');
            size_t q = s.find('C');
            size_t k = m + 1;

            while (m < q) {
                if (isdigit(s[m])) {
                    digits = true;
                } else {
                    digits = false;
                }
                ++m;
            }
        }

        if (s.find('R') != std::string::npos && s.find('C') != std::string::npos && digits) {
            size_t rin = s.find('R');
            size_t cin = s.find('C');
            int row = std::stoi(s.substr(rin + 1, cin - rin - 1));
            int col = std::stoi(s.substr(cin + 1));
            ans = convert(col) + std::to_string(row);

        } else {
            std::string col = "";

            for (int j = 0; j < n && !isdigit(s[j]); ++j) {
                col += s[j];
            }

            int colNum = sconvert(col);
            int row = std::stoi(s.substr(col.length()));
            ans = "R" + std::to_string(row) + "C" + std::to_string(colNum);
        }

        std::cout << ans << std::endl;
    }

    return 0;
}
