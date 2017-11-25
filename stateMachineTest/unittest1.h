#ifndef STATE_MACHINE_TESTS
#define STATE_MACHINE_TESTS

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
		TEST_METHOD(testMethod0);
		TEST_METHOD(testMethod1);
		TEST_METHOD(testMethod2);
		TEST_METHOD(testMethod3);
		TEST_METHOD(testMethod4);
		TEST_METHOD(testMethod5);
		TEST_METHOD(testMethod6);
		TEST_METHOD(testMethod7);
		TEST_METHOD(testMethod8);
		TEST_METHOD(testMethod9);

	};
}

#endif