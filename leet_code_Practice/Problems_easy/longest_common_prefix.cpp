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
        
    
    int size = strs.size();
    if (size ==0)
        return "";
    string answer = "";
    sort(begin(strs), end(strs));
    string first = strs[0];
    string second = strs[size-1];
    
    for (int i = 0; i<first.size(); i++)
    {
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
