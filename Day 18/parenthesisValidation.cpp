#include <iostream>
#include<stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c: s)
        {
            if(c =='(')
            st.push(')');
            
            else if(c=='[')
            st.push(']');

            else if (c=='{')
            st.push('}');

            else if (!st.empty() && st.top() == c) 
            st.pop();

            else 
            return false;
        }
        return st.empty();
    }
};

int main()
{
    Solution sol;
    string s;
    cout<<"Enter parenthesis"<<endl;
    cin>>s;
    cout<< sol.isValid(s)<<endl;
}