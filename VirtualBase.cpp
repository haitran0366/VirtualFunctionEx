#include "VirtualBase.h"
#include <iostream>
using namespace std;
void VirtualBase::fun1()
{
	cout << "Message from fun1 - this is not a virtual function - VirtualBase" << endl;
}

void VirtualBase::fun2()
{
	cout << "Message from fun2 - this is a virtual function - VirtualBase" << endl;
}

void VirtualBase::fun3()
{
	cout << "Message from fun3 - this is not a virtual function - VirtualBase" << endl;
}

void VirtualBase::fun4()
{
	cout << "Message from fun4 - this is a virtual function - VirtualBase" << endl;
}
