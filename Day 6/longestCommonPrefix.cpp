/*
https://leetcode.com/problems/longest-common-prefix/description/
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
    public :
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int a=strs.size();
        string n=strs[0];
        string m=strs[a-1];
        string ans="";
        for(int i=0;i<n.size();i++){
            if(n[i]==m[i])
            {
                ans+=n[i];
            }
            else break;
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    vector<string> input;
    string str;
    cout << "Enter strings (type 'done' to finish input):\n";
    while (true) {
        cin >> str;
        if (str == "done") {
            break;
        }
        input.push_back(str);
    }

    string result = solution.longestCommonPrefix(input);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}