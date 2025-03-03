class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        
        for (int len = 1; len <= n / 2; ++len) {
            if (n % len == 0) {
                string substr = s.substr(0, len);
                string repeated = "";
                
                for (int i = 0; i < n / len; ++i) {
                    repeated += substr;
                }
                
                if (repeated == s) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
