#pragma once
#include <iostream>
using std::cout;
using std::endl;

#define LOG(x) { cout << __FUNCTION__ <<": " << __LINE__<< "\t" << x << endl; }
#define LOG() { cout << __FUNCTION__ <<": " << __LINE__<< endl; }

class TestInvoker
{
public:
	static void TestCase1();
	static void TestCase2();
	static void TestCase3();
};

