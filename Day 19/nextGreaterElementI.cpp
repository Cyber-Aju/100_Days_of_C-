//https://leetcode.com/problems/next-greater-element-i/description/
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map; 
        stack<int> st;
        for (int num : nums2) 
        {
            while (!st.empty() && num>st.top()){ 
                map[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }   
        for (int i = 0; i < nums1.size(); i++){
            nums1[i] = map.count(nums1[i]) ? map[nums1[i]] : -1;
        }
        return nums1;
    }
};

int main()
{
    Solution sol;
    vector<int>& n1;
    vector<int>& n2;

    cout << "Enter Ip ";
    cin >> n1;
    cin>> n2;

    //string simplifiedPath = sol.simplifyPath(path);

    cout << sol.nextGreaterElement(n1, n2) << endl;

    return 0;

}

/*
Initially, nums1 is [4,1,2] and nums2 is [1,3,4,2]. We start by iterating through nums2.

For the first element in nums2, which is 1, we push it onto the stack.

Stack: [1]

For the second element, which is 3, we check if it's greater than the top of the stack (1). Since it is, we update the mapping for 1 to 3 and pop 1 from the stack. Then, we push 3 onto the stack.

Stack: [3]

For the third element, which is 4, we check if it's greater than the top of the stack (3). Update the mapping for 3 to 4 and pop 3 from the stack. Then, push 4 onto the stack.

Stack: [4]

For the fourth element, which is 2, we check if it's greater than the top of the stack (4). Since it's not, we push 2 onto the stack.

Stack: [4, 2]

Now, we have the mapping:

1 is mapped to 3
3 is mapped to 4
Next, we update nums1 based on this mapping:

For 4 in nums1, there is no next greater element, so it remains -1.
For 1, the next greater element is 3.
For 2, there is no next greater element, so it remains -1.
Thus, the final result is [-1, 3, -1], matching the expected output.*/