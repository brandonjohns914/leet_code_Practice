//
//  roman_to_int.cpp
//  leet_code_Practice
//
//  Created by Brandon Johns on 7/28/22.
//

#include <stdio.h>
using namespace std;
#include <iostream>
#include<map>


class Solution {
public:
    int get_converted_number(char convert)
{
    switch(convert)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}
int romanToInt(string s)
{
   if(s.empty())
       return 0;
    int converted_value =0;
    for(int i =0; i<s.size()-1; i++)
    {
        if(get_converted_number(s[i])< get_converted_number(s[i+1]))
        {
            converted_value-= get_converted_number(s[i]);
        }
        else
        {
            converted_value+= get_converted_number((s[i]));
        }
    }
    converted_value += get_converted_number(s[s.size()-1]);
    return converted_value;
}
};



