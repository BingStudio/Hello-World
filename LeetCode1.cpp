#include "stdafx.h"
#include <iostream>
#include <vector>

//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> result;
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++)
			if (nums[i] + nums[j] == target) {
				result.push_back(i);
				result.push_back(j);
				//return result //Single solution 
			}
	}
	return result;// All solutions
}

int main()
{
	int target = 0;
	vector<int> nums = { 1, 2, 3, 4 };
	vector<int> result = twoSum( nums, target);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}
    return 0;
}
