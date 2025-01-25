#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = ""; 
        int len1 = word1.length(); 
        int len2 = word2.length();
        int len = len1 + len2; 

        for (int i = 0; i < len; i++) {
            if (i < len1) { 
                merged = merged + word1[i];
            }
            if (i < len2) { 
                merged = merged + word2[i];
            }
        }

        return merged;
    }
int main()
{
    mergeAlternately("ABC","abc");
    return 0;
}
};