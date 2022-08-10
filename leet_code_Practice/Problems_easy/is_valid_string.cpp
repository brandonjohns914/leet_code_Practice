//
//  is_valid_string.cpp
//  leet_code_Practice
//
//  Created by Brandon Johns on 8/10/22.
//

#include <stdio.h>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
    for(auto& c:s)
    {
        if(c=='(')
        {
            st.push(')');
        }
        else if(c=='{')
        {
            st.push('}');
        }
        else if(c=='[')
        {
            st.push(']');
        }
        else if(st.empty() or st.top()!=c)
        {
            return false;
        }
        else
        {
            st.pop();
        }
    }
    return st.empty()==true;
    }
};
