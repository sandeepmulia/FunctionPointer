#include "FunctionPointerDemo.h"


FunctionPointerDemo::FunctionPointerDemo()
{
	_repository[1] = &TestInvoker::TestCase1;
	_repository[2] = &TestInvoker::TestCase2;
	_repository[3] = &TestInvoker::TestCase3;
}


FunctionPointerDemo::~FunctionPointerDemo()
{
	_repository.clear();
}

void FunctionPointerDemo::InvokeAll()
{
	map<int, void(*)()>::iterator itr = _repository.begin();

	for (; itr != _repository.end(); ++itr)
	{
		((*itr).second)();
	}
}

void FunctionPointerDemo::InvokeTest(int number)
{
	(_repository[number])();
}


int main()
{
	FunctionPointerDemo demo;

	cout << "~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;
	cout << "        Test Invoker Demo           " << endl;
	cout << "~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=" << endl;

	bool brkFlag = true;
	int choice=-1;
	while (brkFlag)
	{
		cout << "Which Test case would you like to run ?" << endl;
		cout << "1. TestCase 1" << endl;
		cout << "2. TestCase 2" << endl;
		cout << "3. TestCase 3" << endl;
		cout << "4. All" << endl;
		cout << "5. Quit" << endl;
		cin >> choice;

		switch (choice)
		{
			case 1:
			case 2:
			case 3:demo.InvokeTest(choice);
				break;
			case 4:demo.InvokeAll();
				break;
			case 5:brkFlag = false;
				break;
			default:cout << "Invalid selection" << endl;
				break;
		}
		cin.clear();
		fflush(stdin);
	}

	cout << "Press Any Key to close..." << endl;
	getchar();
	return 1;
}
