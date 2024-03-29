//
//  main.cpp
//  leet_code_Practice
//
//  Created by Brandon Johns on 2/20/22.
//

#include <iostream>
using namespace std;
#include <sstream>
#include<vector>
#include <string>
#include <stack>

bool isValid(string s);
int main() {
    string ss= "(HELLO THERE)";
    cout<< isValid(ss);
}

bool isValid(string s)
{
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
