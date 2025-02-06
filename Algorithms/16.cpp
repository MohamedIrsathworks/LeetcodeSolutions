class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result;
        string current;
        backtrack(result, digits, mapping, current, 0);
        return result;
    }

private:
    void backtrack(vector<string>& result, const string& digits, 
                   const vector<string>& mapping, string& current, int index) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '0'];
        for (char letter : letters) {
            current.push_back(letter);
            backtrack(result, digits, mapping, current, index + 1);
            current.pop_back();
        }
    }
};