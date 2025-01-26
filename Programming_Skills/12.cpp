class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int len = s.length();

        for (int i = 0; i < len; i++) {
            char t = s[i];
            if (t == 'I') {
                if (i + 1 < len && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                    num -= 1;  
                } else {
                    num += 1;
                }
            }
            else if (t == 'V') {
                num += 5;
            }
            else if (t == 'X') {
                if (i + 1 < len && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                    num -= 10;  
                } else {
                    num += 10;
                }
            }
            else if (t == 'L') {
                num += 50;
            }
            else if (t == 'C') {
                if (i + 1 < len && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                    num -= 100;  
                } else {
                    num += 100;
                }
            }
            else if (t == 'D') {
                num += 500;
            }
            else if (t == 'M') {
                num += 1000;
            }
        }
        return num;
    }
};
