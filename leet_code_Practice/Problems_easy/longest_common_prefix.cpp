//
//  longest_common_prefix.cpp
//  leet_code_Practice
//
//  Created by Brandon Johns on 7/28/22.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
    // vector find dize
    int size = strs.size();
    // size is zero return nothing
    if (size ==0)
        return "";
    // storting string
    sort(begin(strs), end(strs));
        // set first place in the string
    string first = strs[0];
        // based on size select next position
    string second = strs[size-1];
    
        //loop through the string
    for (int i = 0; i<first.size(); i++)
    {
        // first and second position are equal add them together 
        if(first[i]==second[i])
        {
            answer = answer +first[i];
        }
        else
        {
            break;
        }
    }
    return answer;
    }
};
