//
//  two_Sum_Problem.cpp
//  leet_code_Practice
//
//  Created by Brandon Johns on 2/20/22.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <map>
#include<unordered_map>
using namespace std;
/*
 Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
 You can return the answer in any order.
 */

// brute force
class Solution_1 {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        // finding length of vector of numbers
        int length = nums.size();
        // looping through the length;
        for(int i =0; i<length; i++)
        {
            // starting position [1] and looping through
            for(int j= i+1; j<length; j++)
            {
                // if position j == target position minus position i return i,j
                if(nums[j]== target-nums[i])
                    return {i,j};
            }
        }
        return {-1,-1};
    }
    
};


//pointer
class Solution_2 {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int first =0;
        int last = nums.size()-1;
        sort(nums.begin(), nums.end());
        // while first is always larger than last
        while(first < last)
        {
            int sum = nums[first]+nums[last];
            if(sum == target)
                break;
            else if(sum>target)
                last--;
            else
                first++;
        }
        return {first, last};
    }
};


//hash table
class Solution_3 {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        map<int, int> map;
        vector<int> pairs;
        for(int i=0; i<nums.size(); i++)
        {
            int complement = target - nums[i];
            if(map.find(complement)!=map.end())
            {
                pairs.push_back(map.find(complement)->second);
                pairs.push_back(i);
                break;
            }
            map.insert(pair<int,int>(nums[i],i));
        }
        return pairs;
    }
};

