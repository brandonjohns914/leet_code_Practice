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
string longestCommonPrefix(vector<string>& str);
int main() {
   
}

string longestCommonPrefix(vector<string>& str)
{
    int size = str.size();
    if (size ==0)
        return "";
    string answer = "";
    sort(begin(str), end(str));
    string first = str[0];
    string second = str[size-1];
    
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
