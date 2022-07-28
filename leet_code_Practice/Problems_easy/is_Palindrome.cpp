//
//  is_Palindrome.cpp
//  leet_code_Practice
//
//  Created by Brandon Johns on 7/28/22.
//

#include <stdio.h>
class Solution {
public:
    bool isPalindrome(int x) {
        
           int reverse_number=0;
           int remainder =0;
           
           int orginal_number = x;
           
           while( x!=0)
           {
               remainder = x%10;
               reverse_number = reverse_number *10+remainder;
               x /=10;
               
           }
           
           if (reverse_number == orginal_number)
               return true;
           else
               return false;
    }
};

