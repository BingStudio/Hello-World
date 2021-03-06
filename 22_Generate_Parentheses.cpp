#include "stdafx.h"
#include <iostream>
#include<vector>
#include <string>
//Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
//For example, given n = 3, a solution set is :

//[
//	"((()))",
//	"(()())",
//	"(())()",
//	"()(())",
//	"()()()"
//]
//DPS methode
using namespace std;


void addin(int n, int x, int y, string input, vector<string> &anwser);

int main()
{
	vector<string> answer;
	addin(2, 0, 0,"", answer);//2 input numbers

	for (int i = 0; i < answer.size();i++) {
		cout << answer[i] << endl;
	}
    return 0;
}

void addin(int n, int x, int y, string input, vector<string> &anwser)//n is a given num, x and y are index of node, input is a current result, answer is all the answers 
{
	if(y == n)
	{
		anwser.push_back(input);
		return;
	}
	if (x < n) 
	{
		addin(n, x+1, y,input +"(", anwser);
	}
	if (y < x)
	{
		addin(n, x, y+1, input + ")", anwser);
	}

}
