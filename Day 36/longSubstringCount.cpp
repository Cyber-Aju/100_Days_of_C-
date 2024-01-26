#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        const char* str = s.c_str();
        int count = 0;
        int i = 0, j = 0;

        std::unordered_set<char> a;

        while (i < n && j < n) {
            if (a.find(str[i]) == a.end()) {
                a.insert(str[i]);
                count = max(count, i - j + 1);
                i++;
            } else {
                a.erase(str[j]);
                j++;
            }
        }

        return count;
    }
};

int main() {
    Solution solution;
    cout << solution.lengthOfLongestSubstring("abcabcbb") << endl;  // Output: 3
    cout << solution.lengthOfLongestSubstring("bbbbb") << endl;     // Output: 1
    cout << solution.lengthOfLongestSubstring("pwwkew") << endl;    // Output: 3

    return 0;
}
//https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/1157461549/
