#pragma once

#include "CppUnitTest.h"
#include "../stateMachine/stateMachine.h"
#include "../stateMachine/stateMachine.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace stateMachineTest
{
	TEST_CLASS(UnitTest1)
	{
		StateMachine _stm;
	public:

		TEST_METHOD(testMethod1);
		

	};
}