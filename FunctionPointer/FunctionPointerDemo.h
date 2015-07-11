#pragma once
#ifndef _FUNCTIONPOINTERDEMON_CLASS_H_INCLUDED
#define _FUNCTIONPOINTERDEMON_CLASS_H_INCLUDED

#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
#include "TestInvoker.h"

using namespace std;

class FunctionPointerDemo
{

private:
	map<int, void(*)()> _repository;

public:
	FunctionPointerDemo();
	virtual ~FunctionPointerDemo();
	void InvokeTest(int number);
	void InvokeAll();
};

#endif

