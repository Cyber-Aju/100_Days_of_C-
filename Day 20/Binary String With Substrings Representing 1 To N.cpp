#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:
    bool queryString(string s, int n) {
        queue<string> q;
        q.push("1");
        int i = 1;
        while (i++ <= n) {
            q.push(q.front() + "0");
            q.push(q.front() + "1");

            string a = q.front();
            q.pop();

            if (s.find(a) == string::npos) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    string s1 = "0110";
    int n1 = 3;
    cout << "Output for Example 1: " << (solution.queryString(s1, n1) ? "true" : "false") << endl;

    string s2 = "0110";
    int n2 = 4;
    cout << "Output for Example 2: " << (solution.queryString(s2, n2) ? "true" : "false") << endl;

    return 0;
}
