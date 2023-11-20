//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;
class Solution {
public:
string removeDuplicates(string s) {

    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        int count=0;

        if(st.size() && st.top()==s[i])
        {
            count++;
            st.pop();
        }
                
        if(count==0)
        st.push(s[i]);
    }
    string res="";
    while(st.size())
    {
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
    
}
};

int main()
{
    Solution sol;
    string path;

    cout << "Enter the path: ";
    cin >> path;

    //string simplifiedPath = sol.simplifyPath(path);

    cout << "Simplified Path: " << sol.removeDuplicates(path) << endl;

    return 0;

}