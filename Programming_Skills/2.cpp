class Solution {
public:
    char findTheDifference(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        int arr[26] = {0};

        for (int i = 0; i < len1; i++) {
            arr[s[i] - 'a']++;
        }

        for (int i = 0; i < len2; i++) {
            arr[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (arr[i] < 0) {
                return 'a' + i;
            }
        }

        return '\0';
    }
};