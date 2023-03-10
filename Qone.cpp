#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
	string R = S;
	reverse(R.begin(), R.end());
	if (S == R) {
		return "Yes";
	}
	else {
		return "No";
	}
}

int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S);
	return 0;
}
