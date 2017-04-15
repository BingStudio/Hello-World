// 7_ Reverse_Integer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int reverse(int x) {
	long y = x;
	long result = 0;
	while (x) {
		y = x % 10;
		x = x / 10;
		result = result * 10 + y;
	}
	return (result>INT_MAX || result < INT_MIN) ? 0 : result;
}

int main()
{
	int a = reverse(-123122131);
	cout << a << endl;
    return 0;
}

