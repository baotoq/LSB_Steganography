#pragma once
#include <string>

using namespace std;

class Helper
{
public:
	Helper();
	~Helper();
	static string integerToBinary(int n, int maxBit);
	static unsigned int binaryToInteger(string str);
	static bool isEven(int n);
};
